#include<iostream>
using namespace std;

void func(int& ret) {
	ret = 100;
}

int main() {

	//引用的本质就是一个指针常量即
	//即数据类型* const 指针名;指针的指向不可以修改，值可以修改。
	int a = 10;

	int& ret = a;//自动转换为 int* const ret =&a; 指针指向不可以更改；

	ret = 20;//发现为引用，自动转化为 *ret = 20;
	cout << "a:" << a << endl;
	cout << "ret:" <<ret<< endl;
	func(a);
	system("pause");
	return 0;
}