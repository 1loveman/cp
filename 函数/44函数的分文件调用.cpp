#include<iostream>
#include"add.h"
using namespace std;


int main() {
	//�����ķ��ļ�����
	//����.h�ļ�
	//����.c�ļ�
	//����������д��ͷ�ļ�
	//����������д��.cԴ�ļ�������ͷ�ļ�
	//����Ҫʹ�ú�����Դ�ļ�����ͷ�ļ�����

	int a = 10;
	int b = 20;
	int sum = add(a, b);
	cout << sum << endl;
	system("pause");
	return 0;
}