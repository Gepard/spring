<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/CKamikazeBehaviour.h

namespace ntai {
	class CKamikazeBehaviour : public IBehaviour{
	public:
		CKamikazeBehaviour(Global* GL, int uid);
		virtual ~CKamikazeBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		float maxrange;
		bool engaged;
		int uid;
	};
}
=======

namespace ntai {
	class CKamikazeBehaviour : public IBehaviour{
	public:
		CKamikazeBehaviour(Global* GL, int uid);
		virtual ~CKamikazeBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		float maxrange;
		bool engaged;
		int uid;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/CKamikazeBehaviour.h
