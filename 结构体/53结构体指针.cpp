#include<iostream>
#include<string>
using namespace std;

//�ṹ��Ķ���
//��ʽ
/*
	struct �ṹ��������{
		�������� ����;
		�������� ����;
	};
*/
//�ṹ��Ķ���
struct Student {
	//����
	string name;
	//����
	short age = 0;
	//����
	int score = 0;
};

int main() {
	//�����ṹ�����
	struct Student s1;
	//ͨ��ָ��ָ��ṹ�����
	struct Student* p = &s1;
	//ͨ��ָ����ʽṹ�����
	p->name = "����";
	p->age = 20;
	p->score = 90;
	//��ӡ
	cout << "  ������" << p->name << "  ���䣺" << p->age << "  ������" << p->score << endl;//����->���ʽṹ������� ����(*p).nameҲ���Է���
	cout << "  ������" << (*p).name<< "  ���䣺" << (*p).age << "  ������" << (*p).score << endl;
	system("pause");
	return 0;
}