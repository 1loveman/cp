#include<iostream>
using namespace std;

class Base {
public:
	int m_nums;
	int m_weight;
};

class Base1 {
public:
	int m_nums;
	int m_weight;
};

class Son: public Base ,public Base1 {  //语法  : 权限 父类名 ,权限 父类名
public:
	int m_nums;
	int m_weight;
};

void test() {
	Son s;
	s.m_nums = 10;
	cout << s.m_nums << endl;
	s.Base::m_nums = 20;
	cout << s.Base::m_nums << endl;
	s.Base1::m_nums = 30;
	cout << s.Base1::m_nums << endl;
	cout << "size of Son=" << sizeof(Son) << endl;
}
int main() {
	test();


	return 0;
}