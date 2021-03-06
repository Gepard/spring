#include "StdAfx.h"
#include "myMath.h"
#include "Util.h"
#include "LogOutput.h"
#include "Platform/errorhandler.h"
#include "Sim/Units/COB/CobInstance.h" // for TAANG2RAD (ugh)

float2 CMyMath::headingToVectorTable[NUM_HEADINGS];

void CMyMath::Init()
{
	const unsigned int sseBits = proc::GetProcSSEBits();
		logOutput.Print("[CMyMath::Init] CPU SSE mask: %u, flags:\n", sseBits);
		logOutput.Print("\tSSE 1.0:  %d,  SSE 2.0:  %d\n", (sseBits >> 5) & 1, (sseBits >> 4) & 1);
		logOutput.Print("\tSSE 3.0:  %d, SSSE 3.0:  %d\n", (sseBits >> 3) & 1, (sseBits >> 2) & 1);
		logOutput.Print("\tSSE 4.1:  %d,  SSE 4.2:  %d\n", (sseBits >> 1) & 1, (sseBits >> 0) & 1);
		logOutput.Print("\tSSE 4.0A: %d,  SSE 5.0A: %d\n", (sseBits >> 8) & 1, (sseBits >> 7) & 1);

#ifdef STREFLOP_H
	// SSE 1.0 is mandatory in synced context
	if (((sseBits >> 5) & 1) == 0) {
		#ifdef STREFLOP_SSE
		handleerror(0, "CPU is missing SSE instruction support", "Sync Error", 0);
		#elif STREFLOP_X87
		logOutput.Print("\tWARNING: streflop floating-point math is not SSE-enabled\n");
		logOutput.Print("\tWARNING: this may cause desyncs during multi-player games\n");
		logOutput.Print("\tWARNING: this CPU is not SSE-capable, can only use X87 math\n");
		#else
		handleerror(0, "streflop FP-math mode must be either SSE or X87", "Sync Error", 0);
		#endif
	} else {
		#ifdef STREFLOP_SSE
		logOutput.Print("\tusing streflop SSE FP-math mode, CPU supports SSE instructions\n");
		#elif STREFLOP_X87
		logOutput.Print("\tNOTE: streflop floating-point math is set to X87 mode\n");
		logOutput.Print("\tNOTE: this may cause desyncs during multi-player games\n");
		logOutput.Print("\tNOTE: this CPU is SSE-capable, consider recompiling\n");
		#else
		handleerror(0, "streflop FP-math mode must be either SSE or X87", "Sync Error", 0);
		#endif
	}

	// Set single precision floating point math.
	streflop_init<streflop::Simple>();
#else
	// probably should check if SSE was enabled during
	// compilation and issue a warning about illegal
	// instructions if so (or just die with an error)
	logOutput.Print("WARNING: floating-point math is not controlled by streflop\n");
	logOutput.Print("WARNING: this makes keeping multi-player sync 99% impossible\n");
#endif


	for (int a = 0; a < NUM_HEADINGS; ++a) {
		float ang = (a - (NUM_HEADINGS / 2)) * 2 * PI / NUM_HEADINGS;
		float2 v;
			v.x = sin(ang);
			v.y = cos(ang);
		headingToVectorTable[a] = v;
	}

	unsigned checksum = 0;
	for (int a = 0; a < NUM_HEADINGS; ++a) {
		checksum = 33 * checksum + *(unsigned*) &headingToVectorTable[a].x;
		checksum *= 33;
		checksum = 33 * checksum + *(unsigned*) &headingToVectorTable[a].y;
	}

#ifdef STREFLOP_H
	if (checksum != HEADING_CHECKSUM) {
		handleerror(0,
			"Invalid headingToVectorTable checksum. Most likely"
			" your streflop library was not compiled with the correct"
			" options, or you are not using streflop at all.",
			"Sync Error", 0);
	}
#endif
}



float3 GetVectorFromHAndPExact(short int heading, short int pitch)
{
	float3 ret;
	float h = heading * TAANG2RAD;
	float p = pitch * TAANG2RAD;
	ret.x = sin(h) * cos(p);
	ret.y = sin(p);
	ret.z = cos(h) * cos(p);
	return ret;
}

float LinePointDist(const float3& l1, const float3& l2, const float3& p)
{
	float3 dir(l2 - l1);
	float length = dir.Length();
	if (length == 0)
		length = 0.1f;
	dir /= length;

	float a = (p - l1).dot(dir);
	if (a <      0) a =      0;
	if (a > length) a = length;

	float3 p2 = p - dir * a;
	return p2.distance(l1);
}

/**
 * @brief calculate closest point on linepiece from l1 to l2
 * Note, this clamps the returned point to a position between l1 and l2.
 */
float3 ClosestPointOnLine(const float3& l1, const float3& l2, const float3& p)
{
	float3 dir(l2-l1);
	float3 pdir(p-l1);
	float length = dir.Length();
	if (fabs(length) < 1e-4f)
		return l1;
	float c = dir.dot(pdir) / length;
	if (c < 0) c = 0;
	if (c > length) c = length;
	return l1 + dir * (c / length);
}

float smoothstep(float edge0, float edge1, float value)
{
	if (value<=edge0) return 0.0f;
	if (value>=edge1) return 1.0f;
	float t = (value - edge0) / (edge1 - edge0);
	t = std::min(1.0f,std::max(0.0f, t ));
	return t * t * (3.0f - 2.0f * t);
}
