<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/CDGunBehaviour.h

namespace ntai {
	class CDGunBehaviour : public IBehaviour{
	public:
		CDGunBehaviour(Global* GL, int uid);
		virtual ~CDGunBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		int uid;
		bool active;
	};
}
=======

namespace ntai {
	class CDGunBehaviour : public IBehaviour{
	public:
		CDGunBehaviour(Global* GL, int uid);
		virtual ~CDGunBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		int uid;
		bool active;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/CDGunBehaviour.h
