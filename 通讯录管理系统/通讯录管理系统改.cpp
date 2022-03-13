#include<iostream>
#define MAX 1000
using namespace std;

//������ϵ�˽ṹ��
struct pe {
	string name;
	string sex;
	short age;
	string num;
	string ad;
};

//����ͨѶ¼�ṹ��
struct list {
	struct pe stu[MAX];
	short size;
};

//�˵�
void mu() {
	cout << "*******************" << endl;
	cout << "****1�����ϵ��****" << endl;
	cout << "****2��ʾ��ϵ��****" << endl;
	cout << "****3ɾ����ϵ��****" << endl;
	cout << "****4������ϵ��****" << endl;
	cout << "****5�޸���ϵ��****" << endl;
	cout << "****6�����ϵ��****" << endl;
	cout << "****0�˳�ͨѶ¼****" << endl;
	cout << "*******************" << endl;
}

//�ҵ���Ӧ��ϵ�˷����±�
short fi(struct list* l, string name) {
	for (short i = 0; i < l->size; i++) {
		if (l->stu[i].name == name) {
			return i;
		}
	}
	return -1;;
}


//�����ϵ��
void add(struct list* l) {
	short fi(struct list* l,string name);
	if (l->size < MAX) {
		string name;
		cout << "��������Ҫ�����ϵ������" << endl;
		cin >> name;
		if (fi(l,name)==-1) {
			l->stu[l->size].name = name;
			cout << "��������Ҫ�����ϵ���Ա�" << endl;
			cin >> l->stu[l->size].sex;
			cout << "��������Ҫ�����ϵ������" << endl;
			cin >> l->stu[l->size].age;
			cout << "��������Ҫ�����ϵ�˺���" << endl;
			cin >> l->stu[l->size].num;
			cout << "��������Ҫ�����ϵ�˵�ַ" << endl;
			cin >> l->stu[l->size].ad;
			l->size++;
		}
		else {
			cout << "�Ѵ��ڸ���ϵ��" << endl;
		}
		
	}
	else {
		cout << "ͨѶ¼����" << endl;
	}
	system("pause");
	system("cls");

}

//��ʾ��ϵ��
void show(struct list* l) {
	if (0 == l->size) {
		cout << "ͨѶ¼Ϊ�գ�" << endl;
	}
	else {
		for (int i = 0; i < l->size; i++) {
			cout << " ������" << l->stu[i].name
				<< " �Ա�" << l->stu[i].sex
				<< " ���䣺" << l->stu[i].age
				<< " ���룺" << l->stu[i].num
				<< " ��ַ��" << l->stu[i].ad << endl;
		}
	}
	system("pause");
	system("cls");
}

//ɾ����ϵ��
void del(struct list* l) {
	short fi(struct list* l, string name);
	cout << "������ɾ����ϵ������" << endl;
	string name;
	cin >> name;
	short ret = fi(l, name);
	if (ret == -1) {
		cout << "���޴���" << endl;
	}
	else {
		for (int i = ret; i < l->size; i++) {
			l->stu[i] = l->stu[i + 1];
			l->size--;
		}
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");

}

//������ϵ��
void find(struct list* l) {
	short fi(struct list* l, string name);
	cout << "�������������" << endl;
	string name;
	cin >> name;
	int ret = fi(l, name);
	if (ret == -1) {
		cout << "δ�ҵ�����ϵ��" << endl;
	}
	else {
		cout << "���ҳɹ�" << endl;
		cout << " ������" << l->stu[ret].name
			<< " �Ա�" << l->stu[ret].sex
			<< " ���䣺" << l->stu[ret].age
			<< " ���룺" << l->stu[ret].num
			<< " ��ַ��" << l->stu[ret].ad << endl;
	}
	system("pause");
	system("cls");
}

//�޸���ϵ��
void change(struct list* l) {
	short fi(struct list* l, string name);
	cout << "��������Ҫ�޸���ϵ������" << endl;
	string name;
	cin >> name;
	int ret = fi(l, name);
	if (ret == -1) {
		cout << "δ�ҵ�����ϵ��" << endl;
	}
	else {
		cout << "�������޸ĺ���ϵ������" << endl;
		cin >> l->stu[ret].name;
		cout << "�������޸ĺ���ϵ���Ա�" << endl;
		cin >> l->stu[ret].sex;
		cout << "�������޸ĺ���ϵ������" << endl;
		cin >> l->stu[ret].age;
		cout << "�������޸ĺ���ϵ�˺���" << endl;
		cin >> l->stu[ret].num;
		cout << "�������޸ĺ���ϵ�˵�ַ" << endl;
		cin >> l->stu[ret].ad;
		cout << "�޸ĳɹ�" << endl;
		
	}
	system("pause");
	system("cls");
}
//�����ϵ��
void free(struct list* l) {
	l->size = 0;
	cout << "��ճɹ���" << endl;
	system("pause");
	system("cls");
}

int main() {
	//������Ŀ

	//�����ṹ��
	struct list l;
	//��ʼ��
	l.size = 0;

	while (1) {
		short che = 0;
		mu();
		do {
			cout << "��ѡ��" << endl;
			cin >> che;
			if (che < 0 || che>6) {
				cout << "������������������" << endl;
				system("pause");
				system("cls");
				mu();
			}
		} while (che < 0 || che>6);
		switch (che) {
		case 1: add(&l);
			break;
		case 2: show(&l);
			break;
		case 3:del(&l);
			break;
		case 4:find(&l);
			break;
		case 5: change(&l);
			break;
		case 6:free(&l);
			break;
		default:;
			break;
		}
		//�˳�ͨѶ¼
		if (0 == che) {
			cout << "�˳�ͨѶ¼" << endl;
			break;
		}
	}

	//�˵�


	//�����ϵ��

	//��ʾ��ϵ��

	//ɾ����ϵ��

	//������ϵ��

	//�޸���ϵ��

	//�����ϵ��

	//�˳�ͨѶ¼

	system("pause");
	return 0;
}