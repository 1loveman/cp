#include<iostream>
using namespace std;

int main() {
	//����
	//���ã������������
	//��ʽ  �������� &���� =ԭ��
	//���ñ����ʼ�������ҳ�ʼ��֮��ָ��Ͳ����ٷ����ı�;
	//int &b;�Ǵ���ģ�
	//b=c�ǽ�c��ֵ����b�������Ǹı�b��ָ��;
	//һ���������Դ��ڶ������
	int a = 0;
	int& b = a;//�����ͬʱ��ʼ��

	cout << a << endl;
	cout << b << endl;
	b = 10;
	cout << a << endl;
	cout << b << endl;
	system("pause");
	return 0;
}