<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Core/IModule.cpp
#include "include.h"

namespace ntai {

	IModule::IModule(Global* GL){
		G=GL;
		valid=false;
	}

	IModule::~IModule(){
	}

	void IModule::DestroyModule(){
		valid=false;
		//G->RemoveHandler(me);
	}
}
=======
#include "include.h"

namespace ntai {

	IModule::IModule(Global* GL){
		G=GL;
		valid=false;
	}

	IModule::~IModule(){
	}

	void IModule::DestroyModule(){
		valid=false;
		//G->RemoveHandler(me);
	}
}
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Core/IModule.cpp
