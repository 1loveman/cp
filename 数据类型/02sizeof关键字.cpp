//利用sizeof关键字计算数据类型所占内存大小
//格式 sizeof(类型或者变量名);


#include<iostream>
using namespace std;

int main() {
	cout << "short所占内存字节数为：" << sizeof(short) << endl;
	cout << "int所占内存字节数为：" << sizeof(int) << endl;
	cout << "long所占内存字节数为：" << sizeof(long) << endl;
	cout << "long long所占内存字节数为：" << sizeof(long long) << endl;
	system("pause");
	return 0;
}