#include<iostream>
using namespace std;

int main() {
	//赋值运算符
	// 赋值运算符----- = += -= *= /= %=
	int num1, num2;
	cout << "输入num：" << endl;
	cin >> num1;

	//  =
	num2 = num1;
	cout << num2 <<endl;
	//  +=
	num1 += 2;//即num=num1+2;下面同理
	cout << num1 << endl;
	//  -=
	num1 -= 2;
	cout << num1 << endl;
	//  *=
	num1 *= 2;
	cout << num1 << endl;
	//  /=
	num1 /= 2;
	cout << num1 << endl;
	//  %=
	num1 %= 2;
	cout << num1 << endl;

	system("pause");
	return 0;
}