#include<iostream>
using namespace std;

int main() {
	//const����ָ��
	//����ָ��
	// ָ��ָ��ռ��ֵ�������޸ģ�ָ������޸�
	int a = 10;
	int b = 20;
	const int* p = &a;
	p = &b;
	*p = 30;
	// ָ�볣��
	// ָ��ָ��Ŀռ�����޸ģ�ָ�򲻿����޸�
	int* const p2 = &a;
	*p2 = 20;
	p2 = &b;
	// const������ָ�������γ���
	// ָ��ָ��Ŀռ��ָ���ָ��������޸ģ�
	const int* const p3 = &a;
	*p3 = 20;
	p3 = &b;
	system("pause");
	return 0;
}