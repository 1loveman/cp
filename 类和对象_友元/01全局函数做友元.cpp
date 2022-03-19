#include<iostream>
using namespace std;
#include<string>

class Building {
	friend void test1();//添加全局函数为友元
public:
	Building();
	string m_Buildingroom;
private:
	string m_Bedroom;
};

Building::Building() {//Building::限定作用域
	m_Buildingroom = "正在访问客厅";
	m_Bedroom = "正在访问卧室";
}

void test() {
	Building b;
	cout << b.m_Buildingroom << endl;
	cout << b.m_Bedroom << endl;//不可访问私有权限
}
void test1() {
	Building b;
	cout << b.m_Buildingroom << endl;
	cout << b.m_Bedroom << endl;//添加友元之后可以访问
}


int main() {
	//全局函数做友元
	//友元 使其他类或成员函数能够访问类的私有成员属性//友元不能是成员属性
	test();
	test1();


	system("pause");
	return 0;
}