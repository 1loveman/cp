#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	int score =0;
};



struct teacher {
	string name;
	struct student stu[5];
};
//���뺯��
void putin(struct teacher* p, int len) {
	struct teacher* temp=p;
	for (int i = 0; i < len; i++) {
		cout << "��������ʦ����" << endl;
		cin >> p->name;
		system("cls");
		for (int j = 0; j < 5; j++) {
			cout << "��������ʦ������ѧ������ " << endl;
			cin >> p->stu[i].name;
			cout << "��������ʦ������ѧ������ " << endl;
			cin >> p->stu[i].score;
			system("cls");
		}
		p++;
	}
	p = temp;//ָ������ָ��ṹ����
}

void putout(struct teacher* p,int len) {
	struct teacher* temp = p;
	for (int i = 0; i < len; i++) {
		cout << "��ʦ����:" << endl;
		cout << p->name<<endl;
		for (int j = 0; j < 5; j++) {
			cout << "��ʦ������ѧ������: " << endl;
			cout << p->stu[i].name<<endl;
			cout << "��ʦ������ѧ������: " << endl;
			cout << p->stu[i].score<<endl;
		}
		p++;
	}
	p = temp;//ָ������ָ��ṹ����
}

int main() {
	//������ʦ��������ѧ������ʦ����ʦ������ѧ��;ѧ���������ͷ���
	struct teacher t[3];
	struct teacher* p = t;
	int len = sizeof(t) / sizeof(t[0]);
	putin(p,len);
	putout(p, len);
	system("pause");
	return 0;
}