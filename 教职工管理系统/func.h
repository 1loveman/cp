#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>
#include"worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"
#include"fstream"
#define FILENAME "list.txt"

class func {
public:
	func();


	//�˵�
	void Menu();

	//��ӳ�Ա
	void Add();

	//�����ļ�
	void Save();

	//�˳�����
	void Exit();

	~func();

	//��Ա����
	int EmpNum = 0;

	//��Ա����
	Worker** EmpArr = NULL;
};




