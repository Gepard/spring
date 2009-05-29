<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/MetalMakerBehaviour.h

namespace ntai {
	class CMetalMakerBehaviour : public IBehaviour{
	public:
		CMetalMakerBehaviour(Global* GL, int uid);
		virtual ~CMetalMakerBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		bool turnedOn;
		float energyUse;
	};
}
=======

namespace ntai {
	class CMetalMakerBehaviour : public IBehaviour{
	public:
		CMetalMakerBehaviour(Global* GL, int uid);
		virtual ~CMetalMakerBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		bool turnedOn;
		float energyUse;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/MetalMakerBehaviour.h
