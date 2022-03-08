#include<iostream>
using namespace std;
//函数的常见样式
//无参无返
void test1() {
	cout << "test1" << endl;
}
//无参有返
int test2() {
	return 1;
}
//有参无返
void test3(int num1) {
	cout << "test2" << num1 << endl;
}
//有参有返回
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