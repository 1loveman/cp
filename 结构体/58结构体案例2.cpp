#include<iostream>
#include<string>
using namespace std;

struct hero {
	string name;
	int age = 0;
	string sex;
};
void putin(struct hero* p, int len) {
	struct hero* temp = p;
	for (int i = 0; i < len; i++) {
		cout << "������������" << endl;
		cin >> p->name;
		cout << "���������䣺" << endl;
		cin >> p->age;
		cout << "�������Ա�" << endl;
		cin >> p->sex;
		system("cls");
		p++;
	}
	p = temp;
}

void putout(struct hero* p, int len) {
	struct hero* temp = p;
	for (int i = 0; i < len; i++) {
		cout << " ������" << endl;
		cout << p->name<< endl;
		cout << " ���䣺" << endl;
		cout << p->age << endl;
		cout << " �Ա�:" << endl;
		cout << p->sex << endl;
		p++;
	}
	p = temp;
}

//ð������
void MPPX(struct hero* p, int len) {//����ָ���С�ڴ�����;
	struct hero* temp1 = p;
	struct hero* temp2 = p+1;
	for (int i = 0; i < len - 1; i++) {
		p = temp1;
		temp2 = p + 1;
		for (int j = 0; j < len - 1 - i; j++) {
			if ((p->age) > (temp2->age)) {
				(p->name) = (temp2->name);
				(p->age) = (temp2->age);
				(p->sex) = (temp2->sex);
				p++;
				temp2++;
			}
		}
			
	}
	p = temp1;
}


int main() {

	struct hero he[5];
	int len = sizeof(he) / sizeof(he[0]);
	struct hero* p = he;
	//����
	putin(p, len);
	//ð������

	//���
	putout(p, len);
	system("pause");
	return 0;
}