#include<iostream>
#include<string>
using namespace std;

//学生结构体
struct Student {
	string name;
	short age=0;
	int score=0;
};

//老师结构体
struct Teacher {
	string name;
	int age=0;
	struct Student stu; //内嵌结构体定义必须防止外部结构体之前;
};

int main() {
	struct Teacher T1;
	T1.name = "张三";
	T1.age = 10;
	T1.stu.name = "小三";
	T1.stu.age = 10;//访问内嵌的结构体需要一层层的.下去; 或者指针p->stu.name;
	T1.stu.score = 80;
	struct Teacher* p = &T1;
	cout << " 老师姓名： " << T1.name << " 老师年龄： " << T1.age << " 学生姓名： " << T1.stu.name << " 学生年龄： " << T1.stu.age << " 学生分数： " << T1.stu.score << endl;
	cout << " 老师姓名： " << p->name << " 老师年龄： " << p->age << " 学生姓名： " << p->stu.name << " 学生年龄： " << p->stu.age << " 学生分数： " << p->stu.score << endl;
	system("pause");
	return 0;
}