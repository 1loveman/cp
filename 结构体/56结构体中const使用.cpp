#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	short age = 0;
	int score = 0;
};
//值传递需要把结构体全部传入内存消耗过大;
void test_z(struct student stu) {//值传递
	cout << " 学生姓名： " << stu.name << " 学生年龄： " << stu.age << " 学生成绩： " << stu.score << endl;
}
//指针传递只传入地址 节省内存
void test_p(const struct student* p) {//值传递
	//p->age = 10;//此处更改会导致实参改变，所以需要const修饰是的值不可改；
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
	//地址传递
	test_p(p);
	system("pause");
	return 0;
}