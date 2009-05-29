<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/CMoveFailReclaimBehaviour.h

namespace ntai {
	class CMoveFailReclaimBehaviour : public IBehaviour{
	public:
		CMoveFailReclaimBehaviour(Global* GL, int uid);
		virtual ~CMoveFailReclaimBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
	};
}
=======

namespace ntai {
	class CMoveFailReclaimBehaviour : public IBehaviour{
	public:
		CMoveFailReclaimBehaviour(Global* GL, int uid);
		virtual ~CMoveFailReclaimBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/CMoveFailReclaimBehaviour.h
