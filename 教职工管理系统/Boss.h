#pragma once
#include"worker.h"

class Boss :public Worker {
public:
	//����
	Boss(int id, string name, int deptid);
	//��ʾ��Ϣ
	void Showinfo();

	//��ȡ��λ����
	string GetDeptName();
};

