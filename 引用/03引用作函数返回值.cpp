#include<iostream>
using namespace std;

//返回局部引用传递
int& test1() {
	int a = 10;//存放在栈区
	return a;
}

int& test2() {
	static int a = 10;//存放在全局区
	return a;
}
int main() {

	//引用作为返回值
	//不要返回局部变量的引用
	int& ret = test1();
	cout << ret << endl;
	cout << ret << endl;
	
	//函数调用作为左值
	int& ret2 = test2();
	cout << ret2 << endl;
	cout << ret2 << endl;
	test2() = 1000;//左值存在
	cout << ret2 << endl;
	system("pause");
	return 0;
}