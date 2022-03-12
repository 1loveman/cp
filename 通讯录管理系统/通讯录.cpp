#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//��ϵ��
struct person {
	string name;
	string sex;
	short age;
	string num;
	string ad;
};

//ͨѶ¼
struct list {
	struct person pe[MAX];
	short size;
};

//�˵�
void mu(struct list* p) {
	//����
	void add(struct list* p);
	void find(struct list* p);
	void del(struct list* p);
	void output(struct list* p);
	void ch(struct list* p);
	void delall(struct list* p);
	while (1) {
		cout << "*************************************" << endl;
		cout << "*************1�����ϵ��*************" << endl;
		cout << "*************2��ʾ��ϵ��*************" << endl;
		cout << "*************3ɾ����ϵ��*************" << endl;
		cout << "*************4������ϵ��*************" << endl;
		cout << "*************5�޸���ϵ��*************" << endl;
		cout << "*************6�����ϵ��*************" << endl;
		cout << "*************0�˳�ͨѶ¼*************" << endl;
		cout << "*************************************" << endl;
		cout << "��ѡ��" << endl;
		short c = 0;
		//ѭ����֤�����ֵΪ0~9
		do {
			cin >> c;
			if (c < 0 || c>6) {
				cout << "��������,���������룡" << endl;
			}
		} while (c < 0 || c>6);
		//ѡ��ͬ����;
		switch (c) {
		case 1: add(p);
			break;
		case 2: output(p);
			break;
		case 3: del(p);
			break;
		case 4: find(p);
			break;
		case 5: ch(p);
			break;
		case 6: delall(p);
			break;
		default:;
			break;
		}
		//ѡ��0�˳�ͨѶ¼
		if (!c) {
			break;
		}
	}
}

//�����ϵ��
void add(struct list* p) {
	if (p->size < 1000) {
		cout << "������������" << endl;
		cin >> p->pe[p->size].name;
		cout << "�������Ա�" << endl;
		cin >> p->pe[p->size].sex;
		cout << "���������䣺" << endl;
		cin >> p->pe[p->size].age;
		cout << "��������룺" << endl;
		cin >> p->pe[p->size].num;
		cout << "������סַ��" << endl;
		cin >> p->pe[p->size].ad;
		cout << "��ӳɹ���" << endl;
		(p->size)++;
	}
	else {
		cout << "ͨѶ¼������" << endl;
	}
}

//��ʾ��ϵ��
void output(struct list* p) {
	int i = 0;
	if (i == p->size) {
		cout << "ͨѶ¼Ϊ�գ�" << endl;
	}
	else {
		for (i = 1; i < p->size + 1; i++) {
			cout << "������" << p->pe[i - 1].name
				<< " �Ա�" << p->pe[i - 1].sex
				<< " ���䣺" << p->pe[i - 1].age
				<< " ���룺" << p->pe[i - 1].num
				<< " סַ��" << p->pe[i - 1].ad << endl;
		}
	}
	
}

//ɾ����ϵ��
void del(struct list* p) {
	cout << "������Ҫɾ����ϵ�˵�������" << endl;
	int siz=p->size;
	string temp;
	cin >> temp;
	for (int i = 1; i < p->size+1; i++) {
		if (temp == (p->pe[i-1].name)) {
			while (i - 1 < p->size) {
				p->pe[i - 1] = p->pe[i];
				i++;
			}
			cout << "ɾ���ɹ�" << endl;
			p->size--;
			break;
		}
	}
	if (p->size == siz) {
		cout << "ɾ��ʧ��" << endl;
	}
}

//������ϵ��
void find(struct list* p) {
	string temp;
	int i;
	cout << "������Ҫ������ϵ�˵�����" << endl;
	cin >> temp;
	for (i = 1; i < (p->size) + 1; i++) {
		if (temp == p->pe[i - 1].name) {
			cout << "���ҳɹ�" << endl;
			cout << "������" << p->pe[i - 1].name << endl;
			cout << "�Ա�" << p->pe[i - 1].sex << endl;
			cout << "���䣺" << p->pe[i - 1].age << endl;
			cout << "���룺" << p->pe[i - 1].num << endl;
			cout << "��ַ��" << p->pe[i - 1].ad << endl;
			break;
		}
	}
	if (i == (p->size) + 1) {
		cout << "���޴���" << endl;
	}
}

//�޸���ϵ��
void ch(struct list* p) {
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string temp;
	cin >> temp;
	int i;
	for (i = 1; i < p->size + 1; i++) {
		if (temp == p->pe[i - 1].name) {
			cout << "����������" << endl;
			cin >> p->pe[i - 1].name;
			cout << "�������Ա�" << endl;
			cin >> p->pe[i - 1].sex;
			cout << "����������" << endl;
			cin >> p->pe[i - 1].age;
			cout << "���������" << endl;
			cin >> p->pe[i - 1].num;
			cout << "�������ַ" << endl;
			cin >> p->pe[i - 1].ad;
			break;
		}
	}
	if (i == p->size + 1) {
		cout << "δ�ҵ�����ϵ��" << endl;
	}
	else {
		cout << "�޸ĳɹ���" << endl;
	}
}

//���ͨѶ¼
void delall(struct list* p) {
	p->size = 0;
}

int main() {
	//ͨѶ¼����ϵͳ
	//���ù���
	//������Ŀ
	//�����ϵ��
	//ɾ����ϵ��
	//������ϵ��
	//�޸���ϵ��
	//���ͨѶ¼
	//�˳�


	//�����ṹ��
	struct list l;
	//��ʼ��
	l.size = 0;
	//�˵�����
	mu(&l);
	system("pause");
	return 0;
}