#include<iostream>
using namespace std;
#include<string>

class phone {
public:
	static void func() {//静态成员函数也有访问权限，当为private时，通过类名不可访问；
		m_Pname = "三星";//静态成员函数可以访问静态成员变量
		price = 20;//无法区分是哪个对象的属性，静态成员函数不能调用非静态
		cout << "静态成员函数" << endl;

	}
	static string m_Pname;//静态成员变量，特点类内声明，类外得初始化
	int price;

};

string phone::m_Pname;//初始化

int main() {
	//静态成员函数
	
	//特点
	//所有的静态成员变量共同使用一个静态函数
	//静态函数只能访问静态成员变量

	//静态成员函数的调用方式
	//通过对象调用

	//静态成员函数也有访问权限，当为private时，通过类名不可访问；
	phone p;
	p.func();
	//通过类名
	phone::func();
	system("pause");
	return 0;
}