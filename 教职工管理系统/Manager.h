#pragma once
#include"worker.h"

class Manager:public Worker {
public:
	//����
	Manager(int id, string name, int deptid);
	//��ʾ��Ϣ
	void Showinfo();
	//��ʾ��λ
	string GetDeptName();
};
