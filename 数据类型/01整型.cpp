#include<iostream>
using namespace std;

int main() {
	//������
	short a1 = 10;
	cout << "short��ռ�ֽ���Ϊ��" << sizeof(short) << endl;
	//����
	int a2 = 10;
	cout << "int��ռ�ֽ���Ϊ��"<<sizeof(int) << endl;
	//������
	long a3 = 10;
	cout << "long��ռ�ֽ���Ϊ��" << sizeof(long) << endl;
	//��������
	long long a4 = 10;
	cout << "����������ռ�ֽ���Ϊ��" << sizeof(long long) << endl;
	system("pause");
	return 0;
}