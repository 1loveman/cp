#include<iostream>
using namespace std;

//���ؾֲ����ô���
int& test1() {
	int a = 10;//�����ջ��
	return a;
}

int& test2() {
	static int a = 10;//�����ȫ����
	return a;
}
int main() {

	//������Ϊ����ֵ
	//��Ҫ���ؾֲ�����������
	int& ret = test1();
	cout << ret << endl;
	cout << ret << endl;
	
	//����������Ϊ��ֵ
	int& ret2 = test2();
	cout << ret2 << endl;
	cout << ret2 << endl;
	test2() = 1000;//��ֵ����
	cout << ret2 << endl;
	system("pause");
	return 0;
}