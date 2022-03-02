#include<iostream>
using namespace std;

// 案例一三只小猪称体重


int main() {
	int pig1, pig2, pig3;
	//输入第一只小猪的体重；
	cout << "请输入第一只小猪体重：" << endl;
	cin >> pig1;
	cout << "请输入第二只小猪体重：" << endl;
	cin >> pig2;
	cout << "请输入第三只小猪体重：" << endl;
	cin >> pig3;
	if (pig1 > pig2 && pig1 > pig3) {
		cout << "第一只小猪最重" << endl;
	}
	else if (pig2 > pig1 && pig2 > pig3) {
		cout << "第二只小猪最重" << endl;
	}
	else {
		cout << "第三只小猪最重" << endl;
	}
	system("pause");
	return 0;
}