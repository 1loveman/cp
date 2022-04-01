#pragma once
#include"worker.h"

class Boss :public Worker {
public:
	//构造
	Boss(int id, string name, int deptid);
	//显示信息
	void Showinfo();

	//获取岗位名称
	string GetDeptName();
};

