#include<iostream>
using namespace std;
#include<string>

class Building;

class Goodguy {
public:
	Goodguy();
	void visit();
	void visit1();
	Building* building;
};

class Building {
	friend void Goodguy::visit1();
public:
	Building();
	string m_Buildingroom;
private:
	string m_Bedroom;
};

Goodguy::Goodguy() {
	building = new Building;
}
void Goodguy::visit() {
	cout << building->m_Buildingroom<<endl;
	cout << building->m_Bedroom<<endl;//此函数未添加为友元无法访问私有
}
void Goodguy::visit1() {
	cout << building->m_Buildingroom << endl;
	cout << building->m_Bedroom << endl;
}
Building::Building() {
	m_Buildingroom = "正在访问客厅";
	m_Bedroom = "正在访问卧室";
}

int main() {
 //成员函数做友元
	Goodguy g;
	g.visit();
	g.visit1();

	system("pause");
	return;
}