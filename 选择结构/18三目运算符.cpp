#include<iostream>
using namespace std;

// 三目运算符
//格式  表达式? 若表达式为真则执行:若表达式为假则执行;


int main() {

	//创建3个变量
	//将ab作比较，大的赋值给c
	int a, b, c;
	cout << "请分别输入两个数" << endl;
	cin >> a >> b;
	c = a > b ? a : b;
	cout << c<<endl;
	//在c++中三目运算符返回的是变量，可以用来继续赋值;
	(a > b ? a : b) = 100;//将100赋给大的变量
	cout << a << endl;
	system("pause");
	return 0;
}