#include<iostream>
using namespace std;

void func(int& ret) {
	ret = 100;
}

int main() {

	//���õı��ʾ���һ��ָ�볣����
	//����������* const ָ����;ָ���ָ�򲻿����޸ģ�ֵ�����޸ġ�
	int a = 10;

	int& ret = a;//�Զ�ת��Ϊ int* const ret =&a; ָ��ָ�򲻿��Ը��ģ�

	ret = 20;//����Ϊ���ã��Զ�ת��Ϊ *ret = 20;
	cout << "a:" << a << endl;
	cout << "ret:" <<ret<< endl;
	func(a);
	system("pause");
	return 0;
}