#include<iostream>
using namespace std;

int main() {
	//短整型
	short a1 = 10;
	cout << "short所占字节数为：" << sizeof(short) << endl;
	//整型
	int a2 = 10;
	cout << "int所占字节数为："<<sizeof(int) << endl;
	//长整型
	long a3 = 10;
	cout << "long所占字节数为：" << sizeof(long) << endl;
	//长长整形
	long long a4 = 10;
	cout << "长长整型所占字节数为：" << sizeof(long long) << endl;
	system("pause");
	return 0;
}