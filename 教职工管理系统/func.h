#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>
#include"worker.h"

class func {
public:
	func();


	//菜单
	void Menu();

	//添加成员
	void Add();

	//退出程序
	void Exit();

	~func();

	//成员数量
	int EmpNum = 0;

	//成员数组
	Worker** EmpArr = NULL;
};




