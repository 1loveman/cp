#include<iostream>
using namespace std;
class Htmlpage {//父类
public:
	void head() {
		cout << "首页，公开课，登陆，注册....公共头部" << endl;
	}
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
class Cpp : public Htmlpage
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
class Java : public Htmlpage
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
	c.body();
	c.tail();

	cpp.content();
	cpp.head();
	cpp.body();
	cpp.tail();

	java.content();
	java.head();
	java.body();
	java.tail();
}

int main() {
	//继承
	//用以减少重复的代码
	//语法 class 子类名: 访问权限 父类名
	//子类又称作派生类，有父类的共性，也有自己的个性
	//父类又称作基类
	test();

	return 0;
}