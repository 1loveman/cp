#include<iostream>
using namespace std;

int main() {
	
	//goto语句
	//无条件跳转到goto标记所在
	//格式goto 标记名;    标记格式  标记名:  
	//标记名一般用大写字母表示
	//一般建议不要使用goto语句，以免造成程序的混乱;

	cout << "*********1" << endl;
	cout << "*********2" << endl;
	goto FLAG;
	cout << "*********3" << endl;
	cout << "*********4" << endl;
	cout << "*********5" << endl;
	FLAG:
	cout << "*********6" << endl;
	cout << "*********7" << endl;
	system("pause");
	return 0;
}