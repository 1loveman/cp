#include<iostream>
using namespace std;

int* test() {
	int* p = new int(10);
	return p;
}

void test1() {
	int* arr = new int[10];//开辟一个含十个整型元素的数组，并将首地址赋值给指针arr;
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	//delete [] arr; 释放数组
}
int main() {
	//堆区由程序员开辟和释放，或者程序结束后自动释放;
	// 利用new将数据开辟到堆区
	//格式 数据类型* 指针名= new 数据类型(初始值);//new返回开辟的内存地址
	//数组则  new 数据类型[数组长度]
	//利用delete释放
	//格式delete 变量名;
	//释放数组 delete [] 数组名;
	int* p = test();
	//delete p;释放后再使用这块内存会报错;
	cout << *p << endl;
	cout << *p << endl;
	test1();
	system("pause");
	return 0;
}



