#include<iostream>
using namespace std;
#include<string>

class Building {
	friend void test1();//���ȫ�ֺ���Ϊ��Ԫ
public:
	Building();
	string m_Buildingroom;
private:
	string m_Bedroom;
};

Building::Building() {//Building::�޶�������
	m_Buildingroom = "���ڷ��ʿ���";
	m_Bedroom = "���ڷ�������";
}

void test() {
	Building b;
	cout << b.m_Buildingroom << endl;
	cout << b.m_Bedroom << endl;//���ɷ���˽��Ȩ��
}
void test1() {
	Building b;
	cout << b.m_Buildingroom << endl;
	cout << b.m_Bedroom << endl;//�����Ԫ֮����Է���
}


int main() {
	//ȫ�ֺ�������Ԫ
	//��Ԫ ʹ��������Ա�����ܹ��������˽�г�Ա����//��Ԫ�����ǳ�Ա����
	test();
	test1();


	system("pause");
	return 0;
}