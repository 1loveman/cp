#include<iostream>
using namespace std;

#include<string>
int main() {
	//字符串类型
	//C语言风格
	//格式char 字符串名[]="字符串"
	char str1[] = "hello";
	//C++风格
	//添加头文件string
	//格式string 字符串名="字符串";
	string str = "hello";
	cout << str << endl;
	system("pause");
	return 0;
}