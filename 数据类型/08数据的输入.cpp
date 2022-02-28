#include<iostream>
using namespace std;

#include<string>
int main() {
	//数据的输入
	// 从键盘获取数据
	//关键字cin，
	//语法cin>>变量

	//整型输入
	int a1;
	cout << "请输入整形变量的值" << endl;
	cin >> a1;
	cout << "a1=" << a1 << endl;
	//浮点型输入
	double a2;
	cout << "请输入浮点形变量的值" << endl;
	cin >> a2;
	cout << "a2=" << a2 << endl;
	//字符型输入
	char a3;
	cout << "请输入字符形变量的值" << endl;
	cin >> a3;
	cout << "a3=" << a3 << endl;
	//字符串型输入
	string a4;
	cout << "请输入字符串形变量的值" << endl;
	cin >> a4;
	cout << "a4=" << a4 << endl;
	//布尔类型输入
	bool a5;
	cout << "请输入布尔型变量的值" << endl;//0为假，非0为真。
	cin >> a5;
	cout << "a5=" << a5 << endl;
	system("pause");
	return 0;
}