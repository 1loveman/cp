#include<iostream>
using namespace std;

int main() {
	//引用
	//作用：给变量起别名
	//格式  数据类型 &别名 =原名
	//引用必须初始化，并且初始化之后指向就不能再发生改变;
	//int &b;是错误的；
	//b=c是将c的值赋予b，而不是改变b的指向;
	//一个变量可以存在多个别名
	int a = 0;
	int& b = a;//定义的同时初始化

	cout << a << endl;
	cout << b << endl;
	b = 10;
	cout << a << endl;
	cout << b << endl;
	system("pause");
	return 0;
}