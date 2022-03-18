#include<iostream>
using namespace std;

class person {
public:
	person() {
		cout << "默认构造函数" << endl;
	}
	person(int h, int weight):m_H(h),m_Weight(weight)//初始化列表，其中m_H(可对应形参，可写常数)
	{
		cout << "有参构造函数" << endl;
	}
	~person() {
		cout << "析构函数" << endl;
	}
public:
	int m_H;
	int m_Weight;
};

void test() {
	person p(10, 20);
	cout << p.m_Weight << endl;
	person p1(p);
	cout << p1.m_Weight << endl;
}

int main() {
	//初始化列表相当于有参构造
	//在构造函数形参括号后面加:成员属性(值),成员属性(值)
	test();
	system("pause");
	return 0;
}