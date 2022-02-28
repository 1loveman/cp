#include<iostream>
using namespace std;

#include<string>
int main() {
	//布尔类型
	// 只有两个值
	//true--真（本质是1）
	bool flag = true;
	cout << "flag=" << flag<<endl;
	//false--假（本质是0）
	flag = false;
	cout << "flag=" << flag << endl;
	//只占一个字节
	cout << "bool类型所占字节数为：" << sizeof(bool)<<endl;
	system("pause");
	return 0;
}