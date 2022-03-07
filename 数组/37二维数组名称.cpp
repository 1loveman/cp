#include<iostream>
using namespace std;

int main() {
	//二维数组名称
	//用于计算数组元素个数
	int arr[][3] = { 1,2,3,4,5,6 };
	cout << "二维数组一个元素所占空间" << sizeof(arr[0][0]) << endl;//二维数组一个元素所占空间
	cout << "二维数组所占空间" << sizeof(arr) << endl;//二维数组所占空间
	cout << "二维数组一行所占空间" << sizeof(arr[0]) << endl;//二维数组一行所占空间
	cout << "二维数组行数" << sizeof(arr) / sizeof(arr[0]) << endl;//二维数组行数
	cout << "二维数组列数" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//二维数组列数
	cout << "数组中的元素个数" << sizeof(arr) / sizeof(arr[0][0]) << endl;//二维数组所占空间除以一个元素所占空间=数组中的元素个数；
	//用于计算数组首地址
	cout <<"数组首地址" << arr << endl;
	cout <<"数组第一个元素首地址" << &arr[0][0] << endl;
	cout << "第一行首地址" << arr[0] << endl;
	cout << "第二行首地址" << arr[1] << endl;
	system("pause");
	return 0;
}