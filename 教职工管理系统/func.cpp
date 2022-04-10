#include"func.h"



func::func(){
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		EmpNum = 0;
		EmpArr = NULL;
		m_isEmpty = true;
	}
	else {
		char ch;
		ifs >> ch;
		if (ifs.eof()) {
			cout << "�ļ�Ϊ��" << endl;
			EmpNum = 0;
			EmpArr = NULL;
			m_isEmpty = true;
		}
		else {
			int num = GetEmpNum();
			cout << "�ļ�����" << num << "��Ա��" << endl;
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

//��ӡ�˵�
void func::Menu() {
	cout << "*******************************" << endl;
	cout << "***** 0���˳���ǰ����ϵͳ *****" << endl;
	cout << "***** 1�����ְ��         *****" << endl;
	cout << "***** 2����ʾȫ��Ա����Ϣ *****" << endl;
	cout << "***** 3��ɾ��ָ��Ա��     *****" << endl;
	cout << "***** 4���޸�ָ��Ա��     *****" << endl;
	cout << "***** 5������ָ��Ա����Ϣ *****" << endl;
	cout << "***** 6������Ա��         *****" << endl;
	cout << "***** 7����������ĵ�     *****" << endl;
	cout << "*******************************" << endl;
}

//�����ļ�
void func::Save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->EmpNum;i++) {
		ofs << EmpArr[i]->m_Id<<"\\"
			<< EmpArr[i]->m_Name<<"\\ "
			<< EmpArr[i]->m_DeptId
			<< endl;
	}
	ofs.close();
}

//��ӳ�Ա
void func::Add() {
	int AddNum;
	cout << "��������Ҫ����³�Ա����:>";
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
			cout << "������Ҫ��ӵ�ְ�����:>";
			cin >> id;
			cout << "������Ҫ���ְ��������:>";
			cin >> name;
			cout << "��ѡ��Ҫ���ְ���ĸ�λ" << endl;
			cout << "1---��ͨԱ��" << endl
				<< "2---����" << endl
				<< "3---�ϰ�" << endl;
			do {
				cout << "��ѡ����:>";
				cin >> Select;
				if (Select < 1 || Select>3) {
					cout << "��������" << endl;;
				}
			} while (Select < 1 || Select>3);
			
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
		Save();

		cout << "�ɹ����" << AddNum << "����Ա��" << endl;
		this->m_isEmpty = false;
	}
	else {
		cout << "��������" << endl;
	}
	system("pause");
	system("cls");
	
}

//�˳�����
void func::Exit() {
	cout << "�˳��ɹ�����ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

//�����Ա������
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

//��ʼ����Ա
void func::Init_EmpArr() {
	int id;
	string name;
	int did;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	Worker* worker = NULL;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did) {//ofs>>�����ո�ֹͣ
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
