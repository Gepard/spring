<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Tasks/CConsoleTask.cpp
#include "../Core/include.h"

namespace ntai {
	CConsoleTask::CConsoleTask(Global* GL){
		//
		valid = false;
	}

	CConsoleTask::CConsoleTask(Global* GL, string message){
		valid=true;
		G = GL;
		mymessage=message;
	}

	void CConsoleTask::RecieveMessage(CMessage &message){
	}

	bool CConsoleTask::Init(){
		
		if(!valid){
			return false;
		}

		G->L.iprint(mymessage);
		End();
		return true;
	}

}
=======
#include "../Core/include.h"

namespace ntai {
	CConsoleTask::CConsoleTask(Global* GL){
		//
		valid = false;
	}

	CConsoleTask::CConsoleTask(Global* GL, string message){
		valid=true;
		G = GL;
		mymessage=message;
	}

	void CConsoleTask::RecieveMessage(CMessage &message){
	}

	bool CConsoleTask::Init(){
		
		if(!valid){
			return false;
		}

		G->L.iprint(mymessage);
		End();
		return true;
	}

}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Tasks/CConsoleTask.cpp
