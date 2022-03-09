//#include<iostream>
//#include<string>
//
//using namespace std;
//
////结构体的定义
////格式
///*
//	struct 结构体类型名{
//		数据类型 变量;
//		数据类型 变量;
//	};
//*/
////结构体的定义
//struct Student {
//	//姓名
//	string name;
//	//年龄
//	short age;
//	//分数
//	int score;
//}s3;
//
//int main() {
//	//通过结构体类型创建具体名称
//	
//	//先创建再赋值
//	struct Student s1;//c++中创建结构体可以不写struct
//	s1.name = "张三";
//	s1.age = 20;
//	s1.score = 90;
//	cout << "s1" << endl << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score << endl;
//
//	//创建的同时赋值
//	struct Student s2 = { "李四",21,91 };
//	cout << "s2" << endl << "姓名：" << s2.name << "年龄：" << s2.age << "分数：" << s2.score << endl;
//
//	//定义的同时创建 //{}结构体名;
//	s3.name = "王五";
//	s3.age = 22;
//	s3.score = 92;
//	cout << "s3" << endl << "姓名：" << s3.name << "年龄：" << s3.age << "分数：" << s3.score << endl;
//	system("pause");
//	return 0;
//}