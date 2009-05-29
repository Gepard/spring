<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/CStaticDefenceBehaviour.h
namespace ntai {

	class CStaticDefenceBehaviour : public IBehaviour{
	public:
		CStaticDefenceBehaviour(Global* GL, int uid);
		virtual ~CStaticDefenceBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		bool engaged;
		int uid;
	};
}
=======
namespace ntai {

	class CStaticDefenceBehaviour : public IBehaviour{
	public:
		CStaticDefenceBehaviour(Global* GL, int uid);
		virtual ~CStaticDefenceBehaviour();
		bool Init();
		void RecieveMessage(CMessage &message);
	private:
		bool engaged;
		int uid;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Units/Behaviours/CStaticDefenceBehaviour.h
