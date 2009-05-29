<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Tasks/CUnitConstructionTask.h
namespace ntai {
	class CUnitConstructionTask : public IModule {
	public:
		CUnitConstructionTask(Global* GL, int unit, CUnitTypeData* builder, CUnitTypeData* building);
		virtual ~CUnitConstructionTask();
		void RecieveMessage(CMessage &message);
		bool Init();
		void End();
	protected:
		string mymessage;
		int unit;
		CUnitTypeData* builder;
		CUnitTypeData* building;
	};
}
=======
namespace ntai {
	class CUnitConstructionTask : public IModule {
	public:
		CUnitConstructionTask(Global* GL, int unit, CUnitTypeData* builder, CUnitTypeData* building);
		virtual ~CUnitConstructionTask();
		void RecieveMessage(CMessage &message);
		bool Init();
		void End();
	protected:
		string mymessage;
		int unit;
		CUnitTypeData* builder;
		CUnitTypeData* building;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Tasks/CUnitConstructionTask.h
