#include<iostream>
using namespace std;

int test(int a, int b = 10) {
	return b;
}

int main() {
	//函数默认参数
	//格式 返回值类型 函数名（类型 参数 =值,类型 参数 =值）
	
	//输入值优先;
	cout << "b=" << test(5) << endl;//可以只输入没有默认值的参数，不输入数据时，按照默认值
	cout << "b=" << test(10, 20)<< endl;//输入数据，按照输入值

	//注意
	//当一个参数有默认值，则其右边每个参数都必须要有默认值;否则无法判断你输入的是哪个参数；
	// int test(int a= 10, int b ) {//错误的
	//return b;
	//}
	
	
	//函数的默认值只能写在定义和声明其中一个里面，否则会重复定义，
	system("pause");
	return 0;
}