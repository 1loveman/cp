#include<iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& cout,const Person& p);
public:
	Person() :m_nums(10) {

	}
	//成员函数形式
	//加后取值、前置递增
	Person& operator++() {//引用保证每次都是同一个值
		m_nums++;
		return *this;
	}
	//加前取值、后置递增
	Person operator++(int) {
		Person temp = *this;
		m_nums++;
		return temp;
	}
private:
	int m_nums;
};

//左移重载
ostream& operator<<(ostream& cout, const Person& p) {//此处如何用引用就必须加const 因为只有const Person& p才能收变量和值；
	cout << p.m_nums;								//如果用Person &p 只能接收变量,将无法接收后置加加返回的值;
	return cout;									//可以用Person p；因为既可以传入变量又可以传入对应类型值
}

int main() {
	//自增运算符重载
	//成员函数形式
	Person p;
	cout << (++p) << endl;
	cout << p << endl;
	Person p1;
	//全局函数形式
	cout << p1++ << endl;
	cout << p1 << endl;
	system("pause");
	return 0;
}

//关于形参和返回值
//形参为形式参数是变量，根据需求传入的参数可以是变量也可以是对应类型的值
//返回值//返回数据的类型.当返回值类型为引用时，可理解为是返回了对应类型的变量。所以可以用对应类型变量接收。其他则为值。