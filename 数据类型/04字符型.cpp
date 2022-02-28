#include<iostream>
using namespace std;

int main() {
	//字符型
	char ch = 'a';//必须使用双引号并且仅能写一个字符；
	cout << "字符型所占字节为：" << sizeof(char) << endl;//只占用一个字节内存，并且内存中以ascll码的方式存储；
	cout << "变量a对应的ascll码为" << (int)ch<< endl;
	//常用字母ascll码
	//a--97  a--65
	system("pause");
	return 0;
}