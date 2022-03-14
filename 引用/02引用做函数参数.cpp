#include<iostream>
using namespace std;

//引用传递
void swap_(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	
	//引用做函数参数
	//引用作函数参数可以修饰实参;
	int a = 20;
	int b = 30;
	swap_(a,b);
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}