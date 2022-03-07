#include<iostream>
using namespace std;

int main() {
	//一维数组的定义
	// 数组开辟的是一片连续的相同类型的内存空间;
	// 数组下标是从零开始
	//数据类型 数组名[数组长度];
	int arr[5];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 4;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	//数据类型 数组名[数组长度]={值1，值2，值3，值4，值5};
	int arr1[5] = { 0,1,2,3,4 };
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}
	//数据类型 数组名[数组长度]={0,1,2};{}内部不写全,后面没有的编译器自动补零
	int arr2[5] = { 0,1,2 };
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << endl;
	}
	//数据类型 数组名[]={0,1,2,3,4}; []内部不写，编译器会自动计算长度
	int arr3[] = { 0,1,2,3,4 };
	for (int i = 0; i < 5; i++) {
		cout << arr3[i] << endl;
	}
	system("pause");
	return 0;
}