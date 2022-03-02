#include<iostream>
using namespace std;


int main() {
	//嵌套if语句
	//格式if里面再加个if 
	
	int score;
	//提示用户输入分数
	cout << "请输入考的分数：" << endl;
	cin >> score;
	if (score >= 600) {
		cout << "恭喜你考上了一本！" << endl;
		if (score > 650) {
			cout << "恭喜考上了清华" << endl;
		}else{
			cout << "恭喜考上北大" << endl;
		}
	}
	else if (score >= 500) {
		cout << "恭喜你考上了二本大学！" << endl;
	}
	else {
		cout << "恭喜你考上了垃圾大学！" << endl;
	}
	
	system("pause");
	return 0;
}