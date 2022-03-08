#include<iostream>
using namespace std;


int main() {
	//函数的声明
	// 声明可以多次但是定义只能一次；
	//当函数的定义放在main函数之后，在使用函数之前就需要先声明函数;不然会报错；
	//格式  返回值类型 函数名（数据类型 形参）;
	void swap(int num1, int mum2);
	int a = 10;
	int b = 20;
	swap(a, b);//函数的调用
	cout << "交换后" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}



//交换两个数的位置
void swap(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

