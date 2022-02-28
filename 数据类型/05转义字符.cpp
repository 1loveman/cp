#include<iostream>
using namespace std;

int main() {
	//转义字符
	//用于一些不可显示的ascll码
	//常见的转义字符
	//  \n表示换行
	cout << "hello,world!\n";
	//  \\表示反斜杠
	cout << "\\你好世界！\\" << endl;
	//  \tb表示水平制表,包括内容一共占八位
	cout << "a\thello,world!" << endl;
	cout << "aa\thello,world!" << endl;
	cout << "aaa\thello,world!" << endl;
	cout << "aaaa\thello,world!" << endl;
	system("pause");
	return 0;
}