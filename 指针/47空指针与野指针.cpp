#include<iostream>
using namespace std;

int main() {
	//空指针用以指针的初始化
	int* p = NULL;
	//空指针是不可以访问的
	*p = 100;	//0-255之间的内存编号为系统占用内存，用户不允许访问；


	//野指针
	//在指针后面直接赋予地址，是非法操作
	p = (int*)0x1111;
	system("pause");
	return 0;
}