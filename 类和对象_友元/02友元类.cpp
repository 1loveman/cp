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
	m_Buildingroom = "���ڷ��ʿ���";
	m_Bedroom = "���ڷ�������";
}

int main() {
	//����Ϊ��Ԫ
	//�������еĺ��������Է�����һ�����˽��Ȩ�ޣ�������Ԫֻ���ȫ�ֺ������࣬���ں���
	Goodguy g;
	g.visit();
	cout << g.building->m_Bedroom << endl;//������������ֱ���ó�Ա���Է���˽��
	
	system("pause");
	return 0;
}