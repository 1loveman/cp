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
	short age=0;
	//����
	int score=0;
};

int main() {
	//�����ṹ������
	struct Student s[3];
	//���ṹ�������е�Ԫ�ظ�ֵ
	for (int i = 0; i < 3; i++) {
		cout << "������������" << endl;
		cin >> s[i].name;
		cout << "���������䣺" << endl;
		cin >> s[i].age;
		cout << "�����������" << endl;
		cin >> s[i].score;
		cout << "��һλ" << endl;
	}
	//�����������
	for (int i = 0; i < 3; i++) {
		cout <<"����"<< s[i].name <<"����" << s[i].age <<"����" << s[i].score<<endl;
	}
	system("pause");
	return 0;
}