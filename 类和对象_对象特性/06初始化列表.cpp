#include<iostream>
using namespace std;

class person {
public:
	person() {
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	person(int h, int weight):m_H(h),m_Weight(weight)//��ʼ���б�����m_H(�ɶ�Ӧ�βΣ���д����)
	{
		cout << "�вι��캯��" << endl;
	}
	~person() {
		cout << "��������" << endl;
	}
public:
	int m_H;
	int m_Weight;
};

void test() {
	person p(10, 20);
	cout << p.m_Weight << endl;
	person p1(p);
	cout << p1.m_Weight << endl;
}

int main() {
	//��ʼ���б��൱���вι���
	//�ڹ��캯���β����ź����:��Ա����(ֵ),��Ա����(ֵ)
	test();
	system("pause");
	return 0;
}