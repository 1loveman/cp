#include<iostream>
using namespace std;

class Person {
public:
	int m_Height;
	int m_Weight;
	Person operator+(Person &p) {
		Person temp;
		temp.m_Height = this->m_Height + p.m_Height;
		temp.m_Weight = this->m_Weight + p.m_Weight;
		return temp;
	}
};
class Person2 {
public:
	int m_Height;
	int m_Weight;
};

Person2 operator+(Person2 &p1,Person2 &p2) {
	Person2 temp;
	temp.m_Height = p1.m_Height + p2.m_Height;
	temp.m_Weight = p1.m_Weight + p2.m_Weight;
	return temp;
}

void test() {
	Person p1;
	p1.m_Height = 10;
	p1.m_Weight = 20;
	Person p2;
	p2.m_Height = 10;
	p2.m_Weight = 20;
	Person p3 = p2.operator+(p1);//本质核心
	cout << p3.m_Height << endl;
	cout << p3.m_Weight << endl;
	Person p4 = p1 + p2;//简写形式
	cout << p4.m_Height << endl;
	cout << p4.m_Weight << endl;
}
void test2() {
	Person2 p1;
	p1.m_Height = 10;
	p1.m_Weight = 20;
	Person2 p2;
	p2.m_Height = 10;
	p2.m_Weight = 20;
	Person2 p3=operator+(p1,p2);//本质核心
	cout << p3.m_Height << endl;
	cout << p3.m_Weight << endl;
	Person2 p4 = p1 + p2;//简写形式
	cout << p4.m_Height << endl;
	cout << p4.m_Weight << endl;
}




int main() {
	//加号运算符重载 //减号运算符重载原理一样
	//函数名operator+
	//可发生函数重载
	// 基本类型的运算不可以重载 如int +int 
	//可以写成c=a+b形式


	//成员函数运算符重载
	test();
	//全局函数运算符重载
	test2();
	return 0;
}