#include<iostream>
using namespace std;


void test(int a) {
	cout << "int test(int a);"<<endl;
}

void test(double a) {
	cout << "int test(double a);" << endl;
}

void test(int a, double b) {
	cout << "int test1(int a, double b);" << endl;
}

void test(double b,int a) {
	cout << "int test1(double b,int a);" << endl;
}


int main() {
	//��������--������ʹ����ͬ�ĺ�����
	// ������ͬһ������
	//Ҫ�� ���������Ͳ�ͬ���� �����ĸ�����ͬ���� �������͵�˳��ͬ(˳��ͬ�ǿ����ͣ��������int��int��Ϊ��ͬ)
	//����ֵ��ͬ������Ϊ����
	
	//���Ͳ�ͬ
	test(3);
	test(3.14);

	//������ͬ
	test(3);
	test(3, 3.14);

	//����˳��ͬ
	test(3, 3.14);
	test(3.14,3);

	system("pause");
	return 0;
}