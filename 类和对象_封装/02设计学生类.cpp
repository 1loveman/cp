//#include<iostream>
//#include<string>
//using namespace std;
//
//class Student {
//	//类中属性和变量都称为成员
//	//属性  属性成员 属性变量
//	//行为  成员函数 成员方法
//
//	//访问权限
//public:
//	//属性
//	string m_name;
//	string m_number;
//	//行为
//	//给姓名赋值
//	void block_in0(string name) {
//		m_name = name;
//	}
//	//给学号赋值
//	void block_in1(string number) {
//		m_number = number;
//	}
//	//显示姓名学号
//	void block_out() {
//		cout << "姓名" << m_name << "学号" << m_number << endl;
//	}
//};
//
//
//int main() {
//	//设计学生类 属性姓名学号 可以给姓名学号赋值，可以显示学生姓名和学号
//	//创建对象
//	Student stu;
//	stu.block_in0("张三");
//	stu.block_in1("20191105608");
//	stu.block_out();
//	system("pause");
//	return 0;
//}