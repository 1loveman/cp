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

	//��ʾְ����Ϣ
	void ShowMassage();

	//ɾ��ְ��
	void Delete();

	//�޸�ְ����Ϣ
	void Revise();

	//�����ļ�
	void Save();

	//�˳�����
	void Exit();

	//�����Ա����
	int GetEmpNum();

	//��ʼ����Ա
	void Init_EmpArr();

	//ְ������Ƿ����
	int IsExist(int id);

	~func();

	//��Ա����
	int EmpNum = 0;

	//��Ա����
	Worker** EmpArr = NULL;

	//�ļ��жϱ�׼
	bool m_isEmpty=true;
};




