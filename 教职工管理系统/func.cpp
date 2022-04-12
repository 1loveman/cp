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
		ofs << EmpArr[i]->m_Id<<" "
			<< EmpArr[i]->m_Name<<" "
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
			int res;
			do {
				cout << "������Ҫ��ӵ�ְ�����:>";
				cin >> id;
				res=IsExist(id);
				if(res!=-1){
					cout << "�������󣬸�ְ������Ѵ��ڣ�" << endl;
				}
			} while (res!=-1);
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

		cout << "�ɹ����" << AddNum << "����Ա��" << endl;
		this->m_isEmpty = false;
	}
	else {
		cout << "��������" << endl;
	}
	system("pause");
	system("cls");
	
}

//��ʾְ����Ϣ
void func::ShowMassage() {
	if (!m_isEmpty) {
		for (int i = 0; i < EmpNum; i++) {
			EmpArr[i]->Showinfo();
		}
	}
	else {
		cout << "ְԱ�����ڣ�" << endl;
	}
	system("pause");
	system("cls");
}

//ɾ��ְ��
void func::Delete() {
	if (m_isEmpty) {
		cout << "�ļ�Ϊ�ջ��߲����ڣ�" << endl;
	}
	else {
		int id;
		int ret;
		cout << "��������Ҫɾ����ְ�����:>";
		cin >> id;
		ret = IsExist(id);
		if (ret == -1) {
			cout << "��ְ�������ڣ�" << endl;
		}
		else {
			while ((++ret) < EmpNum) {
				EmpArr[ret - 1] = EmpArr[ret];
			}
			EmpNum--;
			Save();
			cout << "ɾ���ɹ���" << endl;
		}
	}
	system("pause");
	system("cls");
}

//�޸�ְ����Ϣ
void func::Revise() {
	if (m_isEmpty) {
		cout << "�ļ�Ϊ�ջ��߲����ڣ�" << endl;
	}
	else {
		cout << "������Ҫ�޸�ְ���ı��:>";
		int id;
		int ret;
		cin >> id;
		ret = IsExist(id);
		if (ret != -1) {
			string name;
			int did;
			cout << "������ְ������:>";
			cin >> name;
			cout << "������ְ����λ" << endl;
			cout << "1---��ͨԱ��" << endl
				<< "2---����" << endl
				<< "3---�ϰ�" << endl;
			do {
				cout << "��ѡ����:>";
				cin >> did;
				if (did < 1 || did>3) {
					cout << "��������" << endl;;
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
			cout << "�޸ĳɹ���" << endl;

		}
		else {
			cout << "��ְ����Ų����ڣ�" << endl;
		}

	}
	system("pause");
	system("cls");
}

//����ָ��Ա��
void func::find() {
	if (m_isEmpty) {
		cout << "�ļ�Ϊ�ջ��߲����ڣ�" << endl;
	}
	else {
		cout << "���ҷ�ʽ����" << endl
			<< "0--�����" << endl
			<< "1--������" << endl
			<< "��ѡ��:>";
		int flag;
		cin >> flag;
		if (flag==1) {
			cout << "������ְ������:>";
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
				cout << "δ�ҵ�������ְ����" << endl;
			}
		}
		else if(flag==0){
			cout << "��������:>";
			int id;
			cin >> id;
			int ret = IsExist(id);
			if (ret == -1) {
				cout << "����ı�Ų����ڣ�" << endl;
			}
			else {
				cout << "���ҳɹ���" << endl;
				EmpArr[ret]->Showinfo();
			}
		}
		else{
			cout << endl << "����ѡ������" << endl;
		}
	}
	system("pause");
	system("cls");
}

void func::sort() {
	if (m_isEmpty) {
		cout << "�ļ������ڻ���Ϊ��" << endl;
	}
	else {
		cout << "ѡ������ʽ" << endl
			<< "0--����" << endl
			<< "1--����" << endl
			<< "��ѡ��:>";
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
			cout << "����ɹ�!" << endl;
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
			cout << "����ɹ�!" << endl;
		}
		else {
			cout << "����ѡ������!" << endl;
		}
		Save();
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

//ְ������Ƿ����
int func::IsExist(int id) {
	for (int i = 0; i < EmpNum; i++) {
		if (EmpArr[i]->m_Id == id) {
			return i;
		}
	}
	return -1;
}


