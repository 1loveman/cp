#include<iostream>
using namespace std;

//交换两个数的位置
void swap(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "被调函数中交换后" << endl;
	cout << "a=" <<num1<< endl;
	cout << "b=" <<num2<< endl;
}


int main() {
	//函数的值传递
	int a = 10;
	int b = 20;
	cout << "交换前" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	swap(a, b);//函数的调用
	cout << "交换后原变量" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//结果ab的值并未变化，在被调函数中值传递并不会改变实参；
	system("pause");
	return 0;
}