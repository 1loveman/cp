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
	cout << building->m_Bedroom<<endl;//�˺���δ���Ϊ��Ԫ�޷�����˽��
}
void Goodguy::visit1() {
	cout << building->m_Buildingroom << endl;
	cout << building->m_Bedroom << endl;
}
Building::Building() {
	m_Buildingroom = "���ڷ��ʿ���";
	m_Bedroom = "���ڷ�������";
}

int main() {
 //��Ա��������Ԫ
	Goodguy g;
	g.visit();
	g.visit1();

	system("pause");
	return;
}