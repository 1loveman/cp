#include<iostream>
using namespace std;
//�����ĳ�����ʽ
//�޲��޷�
void test1() {
	cout << "test1" << endl;
}
//�޲��з�
int test2() {
	return 1;
}
//�в��޷�
void test3(int num1) {
	cout << "test2" << num1 << endl;
}
//�в��з���
int test4(int num1) {
	return num1;
}

int main() {
	int a = 10;
	test1();
	cout << test2() << endl;
	test3(a);
	cout << test4(a) << endl;


	system("pause");
	return 0;
}