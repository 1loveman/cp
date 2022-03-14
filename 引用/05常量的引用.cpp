#include<iostream>
using namespace std;

void func(const int& ret) {
	ret = 100;//修改将会报错
}

int main() {

	//修饰形参防止误操作;
	int a = 10;
	int& ret = a;
	int& ret = 10;//报错不能引用一个非法的空间
	func(a);
	system("pause");
	return 0;
}