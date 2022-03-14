#include<iostream>
using namespace std;

//内存四区
// 代码区
// 全局区
// 栈区
//堆区

//全局变量
int g=0;
//const修饰的全局变量
const int c_g=0;
int main() {
	//程序执行之前只存在代码区和全局区,程序运行时开辟栈区和堆区;
	//代码区,用以存放函数体内的二进制代码，特点，共享，只读；
	//全局区,用以存放全局变量，静态变量，字符串常量，const修饰的全局变量

	//局部变量
	int a = 0;
	//const修饰的局部变量
	const int c_a=0;
	//静态变量
	static int s_a=0;

	
	cout << (int)&g << endl;
	cout << (int)&c_g << endl;
	cout << (int)&s_a << endl;
	cout << (int)&"hello" << endl;
	cout << (int)&a << endl;
	cout << (int)&c_a<< endl;

	system("pause");
	return 0;
}