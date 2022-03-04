#include<iostream>
using namespace std;

int main() {

	//敲桌子
	//从1数到100，如果数字个位或者十位含7或者该数是7的倍数，打印敲桌子，其余直接打印数字

	//循环1到100
	for(int num=1;num<=100;num++){
		int n1, n2, n3;
		//取个位数值与7判断
		n1 = (num % 10);  
		//取十位数值与7判断
		n2 = num/10;
		// 是否7的倍数
		n3 = num % 7;
		//判断是否符合
		if (n1==7||n2==7||!n3) {
			cout << "敲桌子" << endl;
		}
		else {
			cout << num << endl;
		}
	}


	system("pause");
	return 0;
}