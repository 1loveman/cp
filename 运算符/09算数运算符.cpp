#include<iostream>
using namespace std;

int main() {
	//算数运算符
	// 算数运算符----- + - * / % ++  --
	int num1,num2;
	cout << "请分别输入两个数" << endl;
	cin >> num1 >> num2;
	//加+
	cout << num1 + num2<<endl;
	//减-
	cout << num1 - num2 << endl;
	//乘*
	cout << num1 * num2 << endl;
	//除/
	cout << num1 / num2 << endl;//被除数不可为零;两个整数相除结果还是整数；
	//求模（取余）%
	cout << num1 % num2 << endl;//只针对整型，并且num2不可为零；
	//自增运算++
	cout << num1 <<endl<< num1++ << endl;   //所有++都会导致变量加一，
	cout << num1 << endl << ++num1 << endl;//但是表达式的值有区别 i++ 加前取值 ++i加后取值；
	//自减运算--
	cout << num2 << endl << num2++ << endl;//所有--都会导致变量减一，
	cout << num2 << endl << ++num2 << endl;//但是表达式的值有区别 i-- 减前取值 --i减后取值；
	system("pause");
	return 0;
}