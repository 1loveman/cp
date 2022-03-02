#include<iostream>
using namespace std;

// switch选择结构
//格式
/*
	switch(表达式)
	{
		case 结果1:表达式1;break;//结果只能是整型或者字符型，不能是区间，
		case 结果2:表达式2;break;
		case 结果3:表达式3;break;
		case 结果4:表达式4;break;
		default:表达式4;break;
	}

*/



int main() {
	//电影打分
	int score;
	cout << "请输入分数为电影打分0~9：" << endl;
	cin >> score;
	switch (score)
	{
		case 9 :cout << "经典" << endl;
		break;
		case 8 :cout << "经典" << endl;
			break;
		case 7 :cout << "好片" << endl;
			break;
		case 6 :cout << "好片" << endl;
			break;
		case 5 :cout << "烂片" << endl;
			break;
		case 4 :cout << "烂片" << endl;
			break;
		case 3 :cout << "烂片" << endl;
			break;
		case 2 :cout << "烂片" << endl;
			break;
		case 1 :cout << "烂片" << endl;
			break;
		default:cout << "垃圾" << endl;
			break;
	}
	system("pause");
	return 0;
}