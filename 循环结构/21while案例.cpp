#include<iostream>
#include<time.h>//生成随机数头文件
using namespace std;

//猜数字游戏
//系统随机生成一个1~100的随机数，玩家猜测；猜错，提示过大过小；





int main() {

	//添加随机数种子，使其按照系统时间生成随机数；防止每次生成一样的随机数
	srand((unsigned int)time(NULL));
	//系统随机生成随机数
	int num=rand()%100+1,gess;

	while (1) {
		//玩家猜测
		cout << "请输入一个1到100的数:" << endl;
		cin >> gess;
		//判断是否猜对。
		if (gess > num) {
			cout << "猜大了" << endl;
		}
		else if (gess < num) {
			cout << "猜小了" << endl;
		}
		else {
			cout << "恭喜猜对了" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}