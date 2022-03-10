#include<iostream>
#include<string>
using namespace std;

//结构体的定义
//格式
/*
	struct 结构体类型名{
		数据类型 变量;
		数据类型 变量;
	};
*/
//结构体的定义
struct Student {
	//姓名
	string name;
	//年龄
	short age=0;
	//分数
	int score=0;
};

int main() {
	//创建结构体数组
	struct Student s[3];
	//给结构体数组中的元素赋值
	for (int i = 0; i < 3; i++) {
		cout << "请输入姓名：" << endl;
		cin >> s[i].name;
		cout << "请输入年龄：" << endl;
		cin >> s[i].age;
		cout << "请输入分数：" << endl;
		cin >> s[i].score;
		cout << "下一位" << endl;
	}
	//遍历数组输出
	for (int i = 0; i < 3; i++) {
		cout <<"姓名"<< s[i].name <<"年龄" << s[i].age <<"分数" << s[i].score<<endl;
	}
	system("pause");
	return 0;
}