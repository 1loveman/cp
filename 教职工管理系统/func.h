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

	//显示职工信息
	void ShowMassage();

	//删除职工
	void Delete();

	//修改职工信息
	void Revise();

	//查找指定员工
	void find();

	//排序
	void sort();

	//保存文件
	void Save();

	//清空文件
	void Clear();

	//退出程序
	void Exit();

	//计算雇员数量
	int GetEmpNum();

	//初始化成员
	void Init_EmpArr();

	//职工编号是否存在
	int IsExist(int id);

	~func();

	//成员数量
	int EmpNum = 0;

	//成员数组
	Worker** EmpArr = NULL;

	//文件判断标准
	bool m_isEmpty=true;
};




