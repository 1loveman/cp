#include<iostream>
using namespace std;

//�ڴ�����
// ������
// ȫ����
// ջ��
//����

//ȫ�ֱ���
int g=0;
//const���ε�ȫ�ֱ���
const int c_g=0;
int main() {
	//����ִ��֮ǰֻ���ڴ�������ȫ����,��������ʱ����ջ���Ͷ���;
	//������,���Դ�ź������ڵĶ����ƴ��룬�ص㣬����ֻ����
	//ȫ����,���Դ��ȫ�ֱ�������̬�������ַ���������const���ε�ȫ�ֱ���

	//�ֲ�����
	int a = 0;
	//const���εľֲ�����
	const int c_a=0;
	//��̬����
	static int s_a=0;

	
	cout << (int)&g << endl;
	cout << (int)&c_g << endl;
	cout << (int)&s_a << endl;
	cout << (int)&"hello" << endl;
	cout << (int)&a << endl;
	cout << (int)&c_a<< endl;

	system("pause");
	return 0;
}