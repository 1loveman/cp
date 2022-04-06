#include"func.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"

func::func(){

}

func::~func() {
	if (EmpArr) {
		delete[] EmpArr;
		EmpArr = NULL;
	}
}

//打印菜单
void func::Menu() {
	cout << "*******************************" << endl;
	cout << "***** 0、退出当前管理系统 *****" << endl;
	cout << "***** 1、添加职工         *****" << endl;
	cout << "***** 2、显示全部员工信息 *****" << endl;
	cout << "***** 3、删除指定员工     *****" << endl;
	cout << "***** 4、修改指定员工     *****" << endl;
	cout << "***** 5、查找指定员工信息 *****" << endl;
	cout << "***** 6、排序员工         *****" << endl;
	cout << "***** 7、清空所有文档     *****" << endl;
	cout << "*******************************" << endl;
}

//添加成员
void func::Add() {
	int AddNum;
	cout << "请输入需要添加新成员个数:>";
	cin >> AddNum;
	if (AddNum > 0) {
		Worker** NewSpace = new Worker * [EmpNum + AddNum];
		if (EmpNum) {
			for (int i = 0; i < EmpNum; i++) {
				NewSpace[i] = EmpArr[i];
			}
		}
		for (int i = 0; i < AddNum; i++) {
			int id;
			string name;
			int Select;
			cout << "请输入要添加的职工编号:>";
			cin >> id;
			cout << "请输入要添加职工的姓名:>";
			cin >> name;
			cout << "请选择要添加职工的岗位" << endl;
			cout << "1---普通员工" << endl
				<< "2---经理" << endl
				<< "3---老板" << endl;
			cout << "请选择编号:>";
			cin >> Select;
			Worker* worker = NULL;
			switch (Select) {
			case 1:
				worker = new Employee(id, name, Select);
				break;
			case 2:
				worker = new Employee(id, name, Select);
				break;
			case 3:
				worker = new Employee(id, name, Select);
				break;
			default:
				break;
			}
			NewSpace[EmpNum + i] = worker;
		}



		if (EmpArr) {
			delete[] EmpArr;
		}
		this->EmpArr = NewSpace;
		this->EmpNum = EmpNum + AddNum;

		cout << "成功添加" << AddNum << "名新员工" << endl;
	}
	else {
		cout << "输入有误" << endl;
	}
	system("pause");
	system("cls");
	
}

//退出程序
void func::Exit() {
	cout << "退出成功，欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}
