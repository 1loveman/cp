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


	//菜单
	void Menu();

	//添加成员
	void Add();

	//保存文件
	void Save();

	//退出程序
	void Exit();

	//计算雇员数量
	int GetEmpNum();

	//初始化成员
	void Init_EmpArr();

	~func();

	//成员数量
	int EmpNum = 0;

	//成员数组
	Worker** EmpArr = NULL;

	//文件判断标准
	bool m_isEmpty;
};




