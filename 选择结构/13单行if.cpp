#include<iostream>
using namespace std;

//c++中的三种程序运行结构  顺序结构 选择结构 循环结构 
//顺序结构 顺序执行代码 不发生跳转
//选择结构 根据条件选择执行代码
//循环结构 根据条件重复执行代码
int main() {
	//单行if语句
	// 格式 if(条件){若条件为真则执行的语句}   {}后面一般不加分号，在定义结构体和类的时候才加

	bool flag;
	cout << "请输入bool变量值" << endl;
	cin >> flag;
	if (flag) {
		cout << "flag为真" << endl;
	}
	if (!flag) {
		cout << "flag为假" << endl;
	}
	system("pause");
	return 0;
}