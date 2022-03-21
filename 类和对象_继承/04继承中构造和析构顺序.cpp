#include<iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "这是基类的构造函数" << endl;
	}
	~Base() {
		cout << "这是基类的析构函数" << endl;
	}
};
class Son : public Base
{
public:
	Son() {
		cout << "这是派生类的构造函数" << endl;
	}
	~Son() {
		cout << "这是派生类的析构函数" << endl;
	}
};

void test() {
	Son s;
}

int main() {
	//同类做成员一样，先构造父类，再构造子类，，先析构子类，再析构父类。
	test();

	return 0;
}