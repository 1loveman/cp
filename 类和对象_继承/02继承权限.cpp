#include<iostream>
using namespace std;
class Htmlpage {
public:
	void head() {
		cout << "首页，公开课，登陆，注册....公共头部" << endl;
	}
protected:
	void body() {
		cout << "帮助中心，交流合作，站内地图。。。公共底部" << endl;
	}
};

class C : public Htmlpage//子类引用父类格式。
{
public:
	void content() {
		cout << "c语言培训。。。content" << endl;
	}
	void tail() {
		cout << "底部。。。tail" << endl;
		cout << "--------------" << endl;
	}

};
class Cpp : protected Htmlpage
{
public:
	void content() {
		cout << "cpp语言培训。。。content" << endl;
	}
	void tail() {
		cout << "底部。。。tail" << endl;
		cout << "--------------" << endl;
	}

};
class Java : private Htmlpage
{
public:
	void content() {
		cout << "java语言培训。。。content" << endl;
	}
	void tail() {
		cout << "底部。。。tail" << endl;
		cout << "--------------" << endl;
	}

};

void test() {
	C c;
	Cpp cpp;
	Java java;
	c.content();
	c.head();
	c.body();//保护权限
	c.tail();

	cpp.content();
	cpp.head();//保护权限
	cpp.body();//保护权限
	cpp.tail();

	java.content();
	java.head();//私有权限
	java.body();//私有权限
	java.tail();
}

int main() {
	//继承权限有三种
	//继承只能继承父类中的公有权限和保护权限的内容，无法继承私有权限的内容；
	//公有继承，不改变从父类继承过来的权限，
	//保护继承， 将从父类继承过来的权限全部改为保护权限。
	//私有继承， 将从父类继承过来的权限全部改为私有权限。
	test();

	return 0;
}