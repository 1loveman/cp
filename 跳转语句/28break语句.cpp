#include<iostream>
using namespace std;

int main() {
	//break语句

	//在switch中使用
	// 结束switch
	int val;
	cout << "请输入val：" << endl;
	cin >> val;
	switch (val) {
	case 0:cout << val;
		break;  //执行完语句直接结束switch
	case 1:cout << val<<endl;
		break;
	case 2:cout << val<<endl;
		break;
	case 3:cout << val<<endl;
		break;
	default:cout << "错误" << endl;
		break;
	}
	cout << "跳出了" << endl;


	//在循环语句中使用
	//直接退出循环
	for (int i = 0; i < 10; i++) {
		if (i==5) {
			break;
		}
		cout << i << endl;
	}


	//在嵌套循环语句中使用
	//退出内存循环 不影响外部循环
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}