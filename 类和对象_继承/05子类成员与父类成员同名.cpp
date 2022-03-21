#include<iostream>
using namespace std;

class Base {
public:
	int m_Name;
	int m_Height;
	
};
class Son : public Base
{
public:
	int m_Name;
};

void test() {
	//出现同名，默认为子类的成员函数，
	//需要访问父类，需要添加父类作用域。
	//子类中出现与父类同名函数，编译器自动将父类所有同名函数隐藏。 
	Son s;
	s.m_Name = 10;
	cout << s.m_Name << endl;
	s.Base::m_Name = 100;
	cout << s.Base::m_Name << endl;
}

int main() {
	
	test();

	return 0;
}