#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>
#include"worker.h"

class func {
public:
	func();


	//�˵�
	void Menu();

	//��ӳ�Ա
	void Add();

	//�˳�����
	void Exit();

	~func();

	//��Ա����
	int EmpNum = 0;

	//��Ա����
	Worker** EmpArr = NULL;
};




