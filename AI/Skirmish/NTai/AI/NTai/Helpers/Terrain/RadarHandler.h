<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Helpers/Terrain/RadarHandler.h
#ifndef RADAR_HANDLER_H
#define RADAR_HANDLER_H

namespace ntai {

	class CRadarHandler{
	public:
		CRadarHandler(Global*);
		~CRadarHandler();
		
		void Change(int unit);
		float3 NextSite(float3 builderpos, const UnitDef* unit, int MaxDist);

		void Change(int unit, bool Removed);
		unsigned char *RadMap;
		
		Global* G;
	};
}

#endif
=======
#ifndef RADAR_HANDLER_H
#define RADAR_HANDLER_H

namespace ntai {

	class CRadarHandler{
	public:
		CRadarHandler(Global*);
		~CRadarHandler();
		
		void Change(int unit);
		float3 NextSite(float3 builderpos, const UnitDef* unit, int MaxDist);

		void Change(int unit, bool Removed);
		unsigned char *RadMap;
		
		Global* G;
	};
}

#endif
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Helpers/Terrain/RadarHandler.h
