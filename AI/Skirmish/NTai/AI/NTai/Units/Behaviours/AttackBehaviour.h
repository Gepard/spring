<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/AttackBehaviour.h

namespace ntai {
	class CAttackBehaviour : public IBehaviour{
	public:
		CAttackBehaviour(Global* GL, int uid);
		virtual ~CAttackBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		bool engaged;
	};
}
=======

namespace ntai {
	class CAttackBehaviour : public IBehaviour{
	public:
		CAttackBehaviour(Global* GL, int uid);
		virtual ~CAttackBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		bool engaged;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/AttackBehaviour.h
