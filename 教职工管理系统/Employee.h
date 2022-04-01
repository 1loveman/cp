#pragma once
#include"worker.h"

class Employee:public Worker {
public:
	//构造
	Employee(int id, string name, int deptid);

	//显示个人信息
	 void Showinfo();

	//获取岗位名称
	 string GetDeptName();
};
