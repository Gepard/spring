<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Tasks/CConsoleTask.h

namespace ntai {

	class CConsoleTask : public IModule {
	public:
		CConsoleTask(Global* GL);
		CConsoleTask(Global* GL, string message);
		void RecieveMessage(CMessage &message);
		bool Init();
	protected:
		string mymessage;
	};
}
=======

namespace ntai {

	class CConsoleTask : public IModule {
	public:
		CConsoleTask(Global* GL);
		CConsoleTask(Global* GL, string message);
		void RecieveMessage(CMessage &message);
		bool Init();
	protected:
		string mymessage;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Tasks/CConsoleTask.h
