#include<iostream>
using namespace std;

//while循环语句
//格式
/*
	while(条件){
		条件为真执行的语句
	}

*/

int main() {
	//打印0~9
	int i = 0;
	while (i < 10) {
		cout << i << endl;
		i++;
	}
	system("pause");
	return 0;
}