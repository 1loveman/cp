#include<iostream>
using namespace std;

int main() {
	
	//for循环语句
	//格式 for( 1 初始化变量; 2 条件;  3 条件满足执行完代码块后或者条件不满足执行的语句){ 4 条件满足执行的语句}
	// 执行顺序 条件满足 1242424 不满足后23
	//打印0-9

	for (int num = 0; num < 10; num++) { //1和3中都可以为空;1中可用定义或者赋值变量，也可以提前赋值好；3也可以写在代码块里面
		cout << num << endl;
	}//for循环完全可用if代替

	system("pause");
	return 0;
}