#include<iostream>
using namespace std;

int main() {
	//二维数组的定义
	//数据类型 数组名[行数][列数];
	cout << "请输入" << endl;
	int arr[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin>>arr[i][j];
		}
	}
	cout << "输出" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	/*
	数据类型 数组名[行数][列数] = 
	{
		{值,值,值},
		{值,值,值}
	};
	*/
	int arr1[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "输出" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	//数据类型 数组名[行数][列数] ={值,值,值,值,值,值};
	int arr2[2][3] = { 6,5,4,3,2,1 };
	cout << "输出" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	//数据类型 数组名[][列数] ={值,值,值,值,值,值};
	int arr3[][3] = { 6,5,4,3,2,1 };
	cout << "输出" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}