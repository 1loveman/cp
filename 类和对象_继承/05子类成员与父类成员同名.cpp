#include<iostream>
using namespace std;

class Base {
public:
	int m_Name;
	int m_Height;
	
};
class Son : public Base
{
public:
	int m_Name;
};

void test() {
	//����ͬ����Ĭ��Ϊ����ĳ�Ա������
	//��Ҫ���ʸ��࣬��Ҫ��Ӹ���������
	//�����г����븸��ͬ���������������Զ�����������ͬ���������ء� 
	Son s;
	s.m_Name = 10;
	cout << s.m_Name << endl;
	s.Base::m_Name = 100;
	cout << s.Base::m_Name << endl;
}

int main() {
	
	test();

	return 0;
}