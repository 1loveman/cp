#include<iostream>
using namespace std;

//do whlie语句
//格式
/*
	do{
		先执行一遍语句，后如果条件满足继续执行语句
	
	}whlie(条件);



*/

int main() {
	//打印0~9
	int i = 0;
		do {
			cout << i << endl;
			i++;
		} while (i < 10);
	system("pause");
	return 0;
}