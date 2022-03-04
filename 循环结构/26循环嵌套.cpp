#include<iostream>
using namespace std;

int main() {

	//循环嵌套
	//循环里面加循环
	//打印一个9*9的方阵
	
	//外层循环  --外层循环执行一次内层循环执行一周
	for (int i = 0; i < 9; i++) {
		//内层循环
		for (int j = 0; j < 9; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}