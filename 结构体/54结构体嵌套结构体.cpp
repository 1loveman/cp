#include<iostream>
#include<string>
using namespace std;

//ѧ���ṹ��
struct Student {
	string name;
	short age=0;
	int score=0;
};

//��ʦ�ṹ��
struct Teacher {
	string name;
	int age=0;
	struct Student stu; //��Ƕ�ṹ�嶨������ֹ�ⲿ�ṹ��֮ǰ;
};

int main() {
	struct Teacher T1;
	T1.name = "����";
	T1.age = 10;
	T1.stu.name = "С��";
	T1.stu.age = 10;//������Ƕ�Ľṹ����Ҫһ����.��ȥ; ����ָ��p->stu.name;
	T1.stu.score = 80;
	struct Teacher* p = &T1;
	cout << " ��ʦ������ " << T1.name << " ��ʦ���䣺 " << T1.age << " ѧ�������� " << T1.stu.name << " ѧ�����䣺 " << T1.stu.age << " ѧ�������� " << T1.stu.score << endl;
	cout << " ��ʦ������ " << p->name << " ��ʦ���䣺 " << p->age << " ѧ�������� " << p->stu.name << " ѧ�����䣺 " << p->stu.age << " ѧ�������� " << p->stu.score << endl;
	system("pause");
	return 0;
}