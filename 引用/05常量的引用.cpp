#include<iostream>
using namespace std;

void func(const int& ret) {
	ret = 100;//�޸Ľ��ᱨ��
}

int main() {

	//�����βη�ֹ�����;
	int a = 10;
	int& ret = a;
	int& ret = 10;//����������һ���Ƿ��Ŀռ�
	func(a);
	system("pause");
	return 0;
}