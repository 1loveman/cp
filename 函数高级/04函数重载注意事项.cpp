#include<iostream>
using namespace std;

//引用作为重载条件
void test(int& a) {//如果调用这个函数 参数必须传入一个变量,如果传入一个常量会报错
	cout << "void test(int& a)" << endl;
}
void test(const int& a) { //此处可以传入常量，编译器会自动开辟一个临时空间存储常量，然后将a指向temp;
	cout << "void test(const int& a)" << endl;
}


void test1(int& a) {
	cout << "void test(int& a)" << endl;
}
void test1(int& a, int b = 10) {
	cout << "void test(int& a, int b = 10)" << endl;
}

int main() {
	//引用作为重载条件
	int a = 10;
	test(a);
	test(10);

	//函数重载遇到函数默认参数
	//主要在于如果默认后，编译器无法判断具体是哪个函数；
	test1(a);//报错

	system("pause");
	return 0;
}