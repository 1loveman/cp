#include<iostream>
using namespace std;


int main() {
	//多选择if语句
	//格式 
	/*if(条件1){
		条件1为真执行的语句
	}
	else if(条件2){
		条件一为假条件二为真执行的语句
	}
	else{
		都不满足时执行
	}
	*/
	int score;
	cout << "请输入考的分数：" << endl;
	cin >> score;
	if (score >= 600) {
		cout << "恭喜你考上了一本！" << endl;
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