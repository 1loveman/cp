#pragma once
#include"worker.h"

class Manager:public Worker {
public:
	//构造
	Manager(int id, string name, int deptid);
	//显示信息
	void Showinfo();
	//显示岗位
	string GetDeptName();
};
