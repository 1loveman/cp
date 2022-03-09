#include<iostream>
using namespace std;

int main() {
	//指针
	//专门用来存放地址的变量
	//格式 数据类型 * 指针名 =指针指向地址;//此处地址通常为&变量或者其他指针，不可以直接写地址
	int a = 10;
	int* p=&a;
	cout << &a << endl;
	cout << p << endl;
	//指针的使用  *解引用操作
	*p = 30;
	cout << a << endl;
	cout << *p << endl;//通过p中的地址，直接对地址所对应的空间操作
	system("pause");
	return 0;
}