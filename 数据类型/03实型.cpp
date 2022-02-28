#include<iostream>
using namespace std;

int main() {
	//实型(浮点型)分为两种，实际都只显示6位有效数字，但是精确位数不一样
	//单精度浮点型
	float a1 = 3.14f;
	cout << "float所占字节数为：" << sizeof(float) << endl;//占四个字节，有效数字7位
	//双精度浮点型
	double a2 = 3.14;
	cout << "double所占字节数为：" << sizeof(double) << endl;//占八个字节，有效数字15-16位
	//科学计数法表示小数
	//3e3(3*10^3)   3e-3(3*0.1^3)
	system("pause");
	return 0;
}