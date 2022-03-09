#include<iostream>
using namespace std;

int main() {
	//指针所占用的内存空间
	//32位操作系统是四个字节，64位操作系统是八个字节。
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	system("pause");
	return 0;
}