#include"func.h"



func::func(){
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		EmpNum = 0;
		EmpArr = NULL;
		m_isEmpty = true;
	}
	else {
		char ch;
		ifs >> ch;
		if (ifs.eof()) {
			cout << "文件为空" << endl;
			EmpNum = 0;
			EmpArr = NULL;
			m_isEmpty = true;
		}
		else {
			int num = GetEmpNum();
			cout << "文件现有" << num << "名员工" << endl;
			this->EmpNum = num;
			this->EmpArr = new Worker * [this->EmpNum];
			Init_EmpArr();
			m_isEmpty = false;
		}

	}
	ifs.close();

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

//保存文件
void func::Save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->EmpNum;i++) {
		ofs << EmpArr[i]->m_Id<<" "
			<< EmpArr[i]->m_Name<<" "
			<< EmpArr[i]->m_DeptId
			<< endl;
	}
	ofs.close();
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
			int res;
			do {
				cout << "请输入要添加的职工编号:>";
				cin >> id;
				res=IsExist(id);
				if(res!=-1){
					cout << "输入有误，该职工编号已存在！" << endl;
				}
			} while (res!=-1);
			cout << "请输入要添加职工的姓名:>";
			cin >> name;
			cout << "请选择要添加职工的岗位" << endl;
			cout << "1---普通员工" << endl
				<< "2---经理" << endl
				<< "3---老板" << endl;
			do {
				cout << "请选择编号:>";
				cin >> Select;
				if (Select < 1 || Select>3) {
					cout << "输入有误" << endl;;
				}
			} while (Select < 1 || Select>3);
			
			Worker* worker = NULL;
			switch (Select) {
			case 1:
				worker = new Employee(id, name, Select);
				break;
			case 2:
				worker = new Manager(id, name, Select);
				break;
			case 3:
				worker = new Boss(id, name, Select);
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
		Save();

		cout << "成功添加" << AddNum << "名新员工" << endl;
		this->m_isEmpty = false;
	}
	else {
		cout << "输入有误" << endl;
	}
	system("pause");
	system("cls");
	
}

//显示职工信息
void func::ShowMassage() {
	if (!m_isEmpty) {
		for (int i = 0; i < EmpNum; i++) {
			EmpArr[i]->Showinfo();
		}
	}
	else {
		cout << "职员不存在！" << endl;
	}
	system("pause");
	system("cls");
}

//删除职工
void func::Delete() {
	if (m_isEmpty) {
		cout << "文件为空或者不存在！" << endl;
	}
	else {
		int id;
		int ret;
		cout << "请输入需要删除的职工编号:>";
		cin >> id;
		ret = IsExist(id);
		if (ret == -1) {
			cout << "该职工不存在！" << endl;
		}
		else {
			while ((++ret) < EmpNum) {
				EmpArr[ret - 1] = EmpArr[ret];
			}
			EmpNum--;
			Save();
			cout << "删除成功！" << endl;
		}
	}
	system("pause");
	system("cls");
}

//修改职工信息
void func::Revise() {
	if (m_isEmpty) {
		cout << "文件为空或者不存在！" << endl;
	}
	else {
		cout << "请输入要修改职工的编号:>";
		int id;
		int ret;
		cin >> id;
		ret = IsExist(id);
		if (ret != -1) {
			string name;
			int did;
			cout << "请输入职工姓名:>";
			cin >> name;
			cout << "请输入职工岗位" << endl;
			cout << "1---普通员工" << endl
				<< "2---经理" << endl
				<< "3---老板" << endl;
			do {
				cout << "请选择编号:>";
				cin >> did;
				if (did < 1 || did>3) {
					cout << "输入有误" << endl;;
				}
			} while (did < 1 || did>3);
			Worker* worker = NULL;
			switch (did) {
			case 1:
				worker = new Employee(id, name, did);
				break;
			case 2:
				worker = new Manager(id, name, did);
			case 3:
				worker = new Boss(id, name, did);
			default:
				break;
			}
			delete EmpArr[ret];
			/*Worker* p = EmpArr[ret];*/
			EmpArr[ret] = worker;
			/*delete p;*/
			Save();
			cout << "修改成功！" << endl;

		}
		else {
			cout << "该职工编号不存在！" << endl;
		}

	}
	system("pause");
	system("cls");
}

//查找指定员工
void func::find() {
	if (m_isEmpty) {
		cout << "文件为空或者不存在！" << endl;
	}
	else {
		cout << "查找方式如下" << endl
			<< "0--按编号" << endl
			<< "1--按姓名" << endl
			<< "请选择:>";
		int flag;
		cin >> flag;
		if (flag==1) {
			cout << "请输入职工姓名:>";
			int i;
			string name;
			cin >> name;
			bool n = false;
			for (i = 0; i < EmpNum; i++) {
				if ((EmpArr[i]->m_Name) == name) {
					EmpArr[i]->Showinfo();
					n = true;
				}
			}
			if (n==false) {
				cout << "未找到该姓名职工！" << endl;
			}
		}
		else if(flag==0){
			cout << "请输入编号:>";
			int id;
			cin >> id;
			int ret = IsExist(id);
			if (ret == -1) {
				cout << "输入的编号不存在！" << endl;
			}
			else {
				cout << "查找成功！" << endl;
				EmpArr[ret]->Showinfo();
			}
		}
		else{
			cout << endl << "输入选择有误！" << endl;
		}
	}
	system("pause");
	system("cls");
}

void func::sort() {
	if (m_isEmpty) {
		cout << "文件不存在或者为空" << endl;
	}
	else {
		cout << "选择排序方式" << endl
			<< "0--升序" << endl
			<< "1--降序" << endl
			<< "请选择:>";
		int flag;
		cin >> flag;
		if (flag == 0) {
			for (int i = 0; i < EmpNum - 1; i++) {
				for (int j = 0; j < EmpNum - i - 1; j++) {
					if (EmpArr[j]->m_Id > EmpArr[j + 1]->m_Id) {
						Worker* p = EmpArr[j + 1];
						EmpArr[j + 1] = EmpArr[j];
						EmpArr[j] = p;
					}
				}
			}
			cout << "排序成功!" << endl;
		}
		else if (flag == 1) {
			for (int i = 0; i < EmpNum - 1; i++) {
				for (int j = 0; j < EmpNum - i - 1; j++) {
					if (EmpArr[j]->m_Id < EmpArr[j + 1]->m_Id) {
						Worker* p = EmpArr[j + 1];
						EmpArr[j + 1] = EmpArr[j];
						EmpArr[j] = p;
					}
				}
			}
			cout << "排序成功!" << endl;
		}
		else {
			cout << "输入选项有误!" << endl;
		}
		Save();
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

//计算雇员数量。
int func::GetEmpNum() {
	int num = 0;
	int id;
	string name;
	int did;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	while (ifs >> id && ifs >> name && ifs >> did) {
		num++;
	}
	ifs.close();
	return num;
}

//初始化成员
void func::Init_EmpArr() {
	int id;
	string name;
	int did;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	Worker* worker = NULL;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did) {//ofs>>遇到空格停止
		if (did == 1) {
			worker = new Employee(id, name, did);
		}
		else if (did == 2) {
			worker = new Manager(id, name, did);
		}
		else {
			worker = new Boss(id, name, did);
		}
		this->EmpArr[index] = worker;
		index++;
	}
	ifs.close();
}

//职工编号是否存在
int func::IsExist(int id) {
	for (int i = 0; i < EmpNum; i++) {
		if (EmpArr[i]->m_Id == id) {
			return i;
		}
	}
	return -1;
}


