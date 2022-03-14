#include<iostream>
using namespace std;

//返回局部变量的值
int test1() {
	int a=10;
	return a;//返回局部变量的值，编译器先把局部变量的值拷贝一份返回，然后再释放局部的值;
}

//返回局部变量的地址  //不要返回局部变量的地址
int* test2(){
	int a = 10;
	return &a;//指针的地址可以返回，但是对应空间的值编译器会自动保留一次，然后释放，该地址为野指针;
}

int main() {
	//栈区由编译器开辟和释放，用以存储函数参量和局部变量，const修饰的局部变量
	//调用子函数返回局部变量问题
	cout << test1()<<endl;
	int* p = test2();
	cout <<*p<<endl;//编译器自动保留一次；
	cout <<*p<<endl;//局部变量已经释放;

	return 0;
}