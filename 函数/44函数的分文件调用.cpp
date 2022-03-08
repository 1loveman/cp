#include<iostream>
#include"add.h"
using namespace std;


int main() {
	//函数的分文件调用
	//创建.h文件
	//创建.c文件
	//将函数声明写在头文件
	//将函数定义写在.c源文件并加上头文件
	//在需要使用函数的源文件加上头文件即可

	int a = 10;
	int b = 20;
	int sum = add(a, b);
	cout << sum << endl;
	system("pause");
	return 0;
}