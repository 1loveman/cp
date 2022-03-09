#include<iostream>
using namespace std;

//两数交换位置
void swap(int* p1, int* p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main() {
	//在函数调用中值传递形参无法修改实参
	//指针可以修饰实参
	int a = 10;
	int b = 20;
	cout << a << endl << b << endl;
	swap(&a, &b);
	cout << a << endl << b << endl;
	system("pause");
	return 0;
}