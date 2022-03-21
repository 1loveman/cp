#include<iostream>
using namespace std;

class Base {
public:
	static int m_Name;//类内声明
	int m_Height;

};
int Base::m_Name = 100;//类外初始化
class Son : public Base
{
public:
	static int m_Name;
};
int Son::m_Name = 100;//类外初始化,必须先初始化。

void test() {

	//静态，有两种调用方式
	Son s;
	//通过对象调用
	s.m_Name = 11;
	cout << s.m_Name << endl;
	s.Base::m_Name = 111;
	cout << s.Base::m_Name << endl;
	//通过类名访问
	cout << Base::m_Name << endl;
	cout << Son::m_Name << endl;
	cout << Son::Base::m_Name << endl;//Son::通过类名访问 Base::父类作用域下的静态变量。

}

int main() {

	test();

	return 0;
}