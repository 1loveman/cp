//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	void ShowPersonHeight() {
//		cout << "你好世界" << endl;
//	}
//
//	void ShowPersonAge()const //常函数
//	{
//		m_Age = 100;//此处不可以修改
//		m_Height = 100;//用mutable修饰的成员属性可以修改
//
//	}
//	int m_Age = 10;
//	mutable int m_Height
//};
//
//void test() {
//	const Person p;//常对象
//	p.m_Height = 100;
//	p.m_Age = 100;//报错常对象成员属性不可修改，mutable修饰的除外
//	p.ShowPersonHeight();//常对象只能访问常函数
//	
//}
//
//int main() {
//	//常函数
//	//用const修饰的成员函数称为常函数 const写在函数形参（）之后如()const
//	//常函数不可修改成员属性
//	//用mutable定义的特殊类型成员属性可以更改
//
//	//常对象
//	//常对象只可以调用常函数
//	//常对象中只有mutable修饰的成员属性可以更改;
//	test();
//
//	system("pause");
//	return 0;
//}