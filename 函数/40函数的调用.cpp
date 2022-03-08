#include<iostream>
using namespace std;


//函数的定义
/*
函数返回值  函数名(数据类型 形参，数据类型 形参){
	语句;
	return 表达式;
}


*/
//传入两个整型数据，相加后返回加和
int add(int num1, int num2) {
	return num1 + num2;
}


int main() {
	int a = 10;
	int b = 20;
	int sum = add(a, b);//函数的调用 函数名(实参，实参)，在调用的时候是实参
	cout << sum << endl;
	a = 20;
	b = 40;
	sum = add(a, b);//函数的调用
	cout << sum << endl;
	system("pause");
	return 0;
}