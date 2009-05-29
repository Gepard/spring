<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Core/IModule.h
/*
AF 2007
*/

namespace ntai {
	class IModule {
	public:
		IModule(){
			G = 0;
			valid = false;
		}
		IModule(Global* GL);
		virtual ~IModule();
		virtual void RecieveMessage(CMessage &message)=0;
		virtual bool Init()=0;
		virtual void End(){}
		virtual bool IsValid(){
			return valid;
		}
		virtual bool SetValid(bool isvalid){
			valid = isvalid;
			return valid;
		}

		virtual void DestroyModule();

		virtual void operator()(){}
		Global* G;
	protected:
		bool valid;
	};
}
=======
/*
AF 2007
*/

namespace ntai {
	class IModule {
	public:
		IModule(){
			G = 0;
			valid = false;
		}
		IModule(Global* GL);
		virtual ~IModule();
		virtual void RecieveMessage(CMessage &message)=0;
		virtual bool Init()=0;
		virtual void End(){}
		virtual bool IsValid(){
			return valid;
		}
		virtual bool SetValid(bool isvalid){
			valid = isvalid;
			return valid;
		}

		virtual void DestroyModule();

		virtual void operator()(){}
		Global* G;
	protected:
		bool valid;
	};
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Core/IModule.h
