#include<iostream>
using namespace std;

int main() {
	//逻辑运算符
	// 逻辑运算符----- ! && ||
	//c++中非零为真

	//  ! ----取反
	cout << (0) << endl;
	cout << (!0) << endl;
	cout << (1) << endl;
	cout << (!1) << endl;
	//  && ---同真为真
	cout << (0&&0) << endl;
	cout << (0 && 1) << endl;
	cout << (1 && 0) << endl;
	cout << (1 && 1) << endl;
	//  || ---同假为假
	cout << (0 || 0) << endl;
	cout << (0 || 1) << endl;
	cout << (1 || 0) << endl;
	cout << (1 || 1) << endl;
	system("pause");
	return 0;
}