#include<iostream>
using namespace std;

int main() {

	//打印九九乘法表


	//分别打印九行
	for (int i = 1; i < 10; i++) {
		//打印每行的内容
		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << i * j<<"\t";  //每行不断打印列*行;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}