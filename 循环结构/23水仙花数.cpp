#include<iostream>
using namespace std;

int main() {
	
	//案例 水仙花数
	//水仙花数=一个数每个位的三次幂相加的和等于它本身
	//请用do while求所有的3位水仙花数


	int i = 100;
	int n1,n2,n3;
	//循环打印完三位数
	do {
		//分别得到个位十位百位
		//个位
		n1 = i % 10;
		//十位
		n2 = i / 10 % 10;
		//百位
		n3 = i / 100;
		//判断是否为水仙花数   
		if (n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3 == i) {  //主要^不是次方， 是按位异或
			cout << i << "是水仙花数！！！！" << endl;
		}
		else {
			cout << i << "不是水仙花数！" << endl;
		}
		i++;
	} while (i < 1000);



	system("pause");
	return 0;
}