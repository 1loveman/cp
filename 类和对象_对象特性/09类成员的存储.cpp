//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//
//
//};
//class Person1 {
//public:
//	int n;
//
//};
//class Person2 {
//public:
//	static int n;
//
//};
//class Person3 {
//public:
//	static void test() {
//
//	};
//};
//class Person4 {
//public:
//	void test() {
//
//	};
//};
//
//int main() {
//	//空对象会分配一个字节的空间
//	Person p;
//	cout <<"空" << sizeof(p) << endl;
//	//非静态成员位于对象上
//	Person1 p1;
//	cout << "非静态成员" << sizeof(p1) << endl;
//	//静态成员也不在对象上
//	Person2 p2;
//	cout << "静态成员" << sizeof(p2) << endl;
//	//静态和非静态成员函数都不在对象上
//	Person2 p3;
//	cout << "静态成员" << sizeof(p3) << endl;
//	Person2 p4;
//	cout << "静态成员" << sizeof(p4) << endl;
//	system("pause");
//	return 0;
//}