#include<iostream>
using namespace std;

class Base {
public:
	static int m_Name;//��������
	int m_Height;

};
int Base::m_Name = 100;//�����ʼ��
class Son : public Base
{
public:
	static int m_Name;
};
int Son::m_Name = 100;//�����ʼ��,�����ȳ�ʼ����

void test() {

	//��̬�������ֵ��÷�ʽ
	Son s;
	//ͨ���������
	s.m_Name = 11;
	cout << s.m_Name << endl;
	s.Base::m_Name = 111;
	cout << s.Base::m_Name << endl;
	//ͨ����������
	cout << Base::m_Name << endl;
	cout << Son::m_Name << endl;
	cout << Son::Base::m_Name << endl;//Son::ͨ���������� Base::�����������µľ�̬������

}

int main() {

	test();

	return 0;
}