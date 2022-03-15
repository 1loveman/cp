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
	//函数重载--即可以使用相同的函数名
	// 必须在同一作用域
	//要求 参数的类型不同或者 参数的个数不同或者 参数类型的顺序不同(顺序不同是看类型，如果均是int，int则为相同)
	//返回值不同不可作为条件
	
	//类型不同
	test(3);
	test(3.14);

	//个数不同
	test(3);
	test(3, 3.14);

	//类型顺序不同
	test(3, 3.14);
	test(3.14,3);

	system("pause");
	return 0;
}