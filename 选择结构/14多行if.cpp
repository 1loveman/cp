#include<iostream>
using namespace std;


int main() {
	//多行if语句
	//格式 if(条件){条件为真时执行的语句}else{条件为假的时候执行的语句}

	bool flag;
	cout << "请输入bool变量值" << endl;
	cin >> flag;
	if (flag) {
		cout << "flag为真" << endl;
	}
	else{
		cout << "flag为假" << endl;
	}
	system("pause");
	return 0;
}