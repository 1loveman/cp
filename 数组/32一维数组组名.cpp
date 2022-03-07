#include<iostream>
using namespace std;

int main() {
	//一维数组名
	//用以求数组的首地址
	int arr[5] = {0,1,2,3,4};
	cout << arr << endl;
	cout << &arr[0] << endl;//可知数组的首地址与数组第一个元素首地址相同;
	//用以求数组的长度
	cout << sizeof(arr)<<endl;//数组所占空间大小
	cout << sizeof(arr[0]) << endl;//第一个元素所占内存空间
	cout << sizeof(arr) / sizeof(arr[0]) << endl;//数组长度
	
	system("pause");
	return 0;
}