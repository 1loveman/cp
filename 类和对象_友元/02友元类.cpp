#include<iostream>
using namespace std;
 #include<string>

class Building;
class Goodguy {
public:
	Goodguy();
	void visit();
	Building* building;
};
class Building {
	friend class Goodguy;
public:
	Building();
	string m_Buildingroom;
private:
	string m_Bedroom;
};
Goodguy::Goodguy() {
	building = new Building ;
}
void Goodguy::visit() {
	cout << building->m_Buildingroom << endl;
	cout << building->m_Bedroom << endl;
}
Building::Building() {
	m_Buildingroom = "正在访问客厅";
	m_Bedroom = "正在访问卧室";
}

int main() {
	//类作为友元
	//类内所有的函数都可以访问另一个类的私有权限；、、友元只针对全局函数，类，类内函数
	Goodguy g;
	g.visit();
	cout << g.building->m_Bedroom << endl;//不可跳过函数直接用成员属性访问私有
	
	system("pause");
	return 0;
}