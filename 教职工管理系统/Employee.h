#pragma once
#include"worker.h"

class Employee:public Worker {
public:
	//����
	Employee(int id, string name, int deptid);

	//��ʾ������Ϣ
	 void Showinfo();

	//��ȡ��λ����
	 string GetDeptName();
};
