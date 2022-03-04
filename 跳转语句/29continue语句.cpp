#include<iostream>
using namespace std;

int main() {
	
	//continue语句
	//在循环语句中，跳过本次循环
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;// i=5时跳过本次直接执行下一次循环
		}
		cout << "**********" << i << endl;
	}
	//输出100以内的偶数
	for (int j = 0; j < 100; j++) {
		if (j % 2) {
			continue;
		}
		cout << j << endl;
	}
	
	system("pause");
	return 0;
	
}