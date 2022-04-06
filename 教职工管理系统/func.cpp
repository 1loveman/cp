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
			cout << "��ѡ����:>";
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

		cout << "�ɹ����" << AddNum << "����Ա��" << endl;
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
