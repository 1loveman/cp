#include<iostream>
using namespace std;

class Person {
public:
	static int m_Age;//类内声明
};

int Person::m_Age=10;//类外初始化

class Person1 {
private://加了私有权限无法通过类名访问到
	static int m_Age;//类内声明
};

int Person1::m_Age = 20;//类外初始化

void test() {
	Person P1;
	P1.m_Age = 100;
	cout << "P1" << P1.m_Age << endl;
	Person P2;
	P2.m_Age = 100;
	cout << "P1" << P1.m_Age << endl << "P2"<< P2.m_Age << endl;
}

int main() {
	//静态成员变量
	//所以静态成员变量公用一份数据
	test();
	// 在编译的时候分配内存;
	//类内声明，类外初始化;

	//也有访问权限
	cout << Person::m_Age << endl;//权限公有
	cout << Person1::m_Age << endl;//报错因为权限私有
	//访问方式
	//通过对象
	Person P1;
	P1.m_Age = 100;
	//通过类名
	Person::m_Age = 10;

	system("pause");
	return 0;
}