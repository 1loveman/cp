#include<iostream>
using namespace std;

class Person {
public:
	static int m_Age;//��������
};

int Person::m_Age=10;//�����ʼ��

class Person1 {
private://����˽��Ȩ���޷�ͨ���������ʵ�
	static int m_Age;//��������
};

int Person1::m_Age = 20;//�����ʼ��

void test() {
	Person P1;
	P1.m_Age = 100;
	cout << "P1" << P1.m_Age << endl;
	Person P2;
	P2.m_Age = 100;
	cout << "P1" << P1.m_Age << endl << "P2"<< P2.m_Age << endl;
}

int main() {
	//��̬��Ա����
	//���Ծ�̬��Ա��������һ������
	test();
	// �ڱ����ʱ������ڴ�;
	//���������������ʼ��;

	//Ҳ�з���Ȩ��
	cout << Person::m_Age << endl;//Ȩ�޹���
	cout << Person1::m_Age << endl;//������ΪȨ��˽��
	//���ʷ�ʽ
	//ͨ������
	Person P1;
	P1.m_Age = 100;
	//ͨ������
	Person::m_Age = 10;

	system("pause");
	return 0;
}