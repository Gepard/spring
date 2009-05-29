<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Tasks/CKeywordConstructionTask.h
namespace ntai {
	class CKeywordConstructionTask : public IModule {
	public:
		CKeywordConstructionTask(Global* GL, int unit, btype type);
		void RecieveMessage(CMessage &message);
		bool Init();
		void Build();
		void End();
	protected:
		int unit;
		btype type;
		CUnitTypeData* building;
		CUnitTypeData* utd;
	};
}
=======
namespace ntai {
	class CKeywordConstructionTask : public IModule {
	public:
		CKeywordConstructionTask(Global* GL, int unit, btype type);
		void RecieveMessage(CMessage &message);
		bool Init();
		void Build();
		void End();
	protected:
		int unit;
		btype type;
		CUnitTypeData* building;
		CUnitTypeData* utd;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Tasks/CKeywordConstructionTask.h
