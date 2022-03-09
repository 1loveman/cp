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
	short age = 0;
	//分数
	int score = 0;
};

int main() {
	//创建结构体变量
	struct Student s1;
	//通过指针指向结构体变量
	struct Student* p = &s1;
	//通过指针访问结构体变量
	p->name = "张三";
	p->age = 20;
	p->score = 90;
	//打印
	cout << "  姓名：" << p->name << "  年龄：" << p->age << "  分数：" << p->score << endl;//利用->访问结构体变量， 或者(*p).name也可以访问
	cout << "  姓名：" << (*p).name<< "  年龄：" << (*p).age << "  分数：" << (*p).score << endl;
	system("pause");
	return 0;
}