#include<iostream>
using namespace std;

//占位参数
int test(int a, int) {
	return a;
}
//占位参数添加默认值后
int test1(int a, int =10) {
	return a;
}

int main() {
	//函数的占位参数
	// 调用时必须填补该位置。
	//返回值 函数名 （数据类型）
	cout << "a=" << test(20, 30) << endl;
	//占位参数加一个默认值即可不用输入
	cout << "a=" << test1(20) << endl;
	system("pause");
	return 0;
}