<<<<<<< HEAD:AI/Skirmish/NTai/AI/NTai/Tasks/ITask.h
/*
AF 2007
*/

class ITask {
public:
	virtual bool execute()=0;
	virtual bool execute(int uid)=0;
	virtual bool IsValid()=0;
	virtual bool SetValid(bool isvalid)=0;
	virtual btype GetType()=0;
};
=======
/*
AF 2007
*/

class ITask {
public:
	virtual bool execute()=0;
	virtual bool execute(int uid)=0;
	virtual bool IsValid()=0;
	virtual bool SetValid(bool isvalid)=0;
	virtual btype GetType()=0;
};
>>>>>>> remotes/gepard/master:AI/Skirmish/NTai/AI/NTai/Tasks/ITask.h
