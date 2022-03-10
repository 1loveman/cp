#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	short age = 0;
	int score = 0;
};

void test_z(struct student stu) {//值传递
	cout << " 学生姓名： " << stu.name << " 学生年龄： " << stu.age << " 学生成绩： " << stu.score << endl;
}

void test_p(struct student* p) {//值传递
	cout << " 学生姓名： " << p->name << " 学生年龄： " << p->age << " 学生成绩： " << p->score << endl;
}


int main() {
	struct student stu;
	stu.name = "张三";
	stu.age = 20;
	stu.score = 80;
	struct student* p = &stu;
	//调用函数两种方式
	// 通过调用函数输出结构体内容； 
	//值传递
	test_z(stu);
	test_p(p);
	//地址传递

	system("pause");
	return 0;
}