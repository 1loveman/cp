#include<iostream>
using namespace std;

int main() {
	//const修饰指针
	//常量指针
	// 指针指向空间的值不可以修改，指向可以修改
	int a = 10;
	int b = 20;
	const int* p = &a;
	p = &b;
	*p = 30;
	// 指针常量
	// 指针指向的空间可以修改，指向不可以修改
	int* const p2 = &a;
	*p2 = 20;
	p2 = &b;
	// const既修饰指针又修饰常量
	// 指针指向的空间和指针的指向均不可修改；
	const int* const p3 = &a;
	*p3 = 20;
	p3 = &b;
	system("pause");
	return 0;
}