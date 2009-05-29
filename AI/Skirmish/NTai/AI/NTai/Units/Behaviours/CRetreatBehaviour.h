<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/CRetreatBehaviour.h
namespace ntai {
	class CRetreatBehaviour : public IBehaviour{
	public:
		CRetreatBehaviour(Global* GL, int uid);
		virtual ~CRetreatBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		int uid;
		bool active;
		float damage;
	};
}
=======
namespace ntai {
	class CRetreatBehaviour : public IBehaviour{
	public:
		CRetreatBehaviour(Global* GL, int uid);
		virtual ~CRetreatBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		int uid;
		bool active;
		float damage;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/CRetreatBehaviour.h
