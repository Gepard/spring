<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Tasks/CLeaveBuildSpotTask.h

namespace ntai {
	class CLeaveBuildSpotTask : public IModule {
	public:
		CLeaveBuildSpotTask(Global* GL, int unit, CUnitTypeData* ud);
		void RecieveMessage(CMessage &message);
		bool Init();
		void End();
	protected:
		string mymessage;
		int unit;
		CUnitTypeData* utd;
	};
}
=======

namespace ntai {
	class CLeaveBuildSpotTask : public IModule {
	public:
		CLeaveBuildSpotTask(Global* GL, int unit, CUnitTypeData* ud);
		void RecieveMessage(CMessage &message);
		bool Init();
		void End();
	protected:
		string mymessage;
		int unit;
		CUnitTypeData* utd;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Tasks/CLeaveBuildSpotTask.h
