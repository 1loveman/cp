#include<iostream>
using namespace std;

class person {
public:
	person() {
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	person(int h, int weight) {
		m_H = h;
		m_Weight = new int(weight);
		cout << "�вι��캯��" << endl;
	}
	person(const person& p) {//ǳ����
		m_H = p.m_H;
		m_Weight = p.m_Weight;
		cout << "�������캯��" << endl;
	}
	//person(const person& p) {
	//	//���
	//	m_H = p.m_H;
	//	m_Weight = new int(*p.m_Weight);
	//	cout << "������캯��" << endl;
	//}
	~person() {
		if(m_Weight!=NULL){
			delete m_Weight;
			m_Weight = NULL;
		}
		cout << "��������" << endl;
	}
public:
	int m_H;
	int* m_Weight;
};

void test() {
	person p(10, 20);
	cout << *p.m_Weight << endl;
	person p1(p);
	cout << *p1.m_Weight << endl;
}

int main() {
	//�����ǳ����
	//�������ṩ��Ϊǳ����������Ա����Ϊָ��ʱ�ҿռ�Ϊ���ٵĶѣ���ǳ�����������������ͷŻ��ظ��ͷ�ͬһ�������ڴ���ɷǷ�����
	//������� ����ʱ����Ϊ��� ������ָ���ַ���������¿���һ�ζ����ڴ�ռ佫ֵ����
	test();
	system("pause");
	return 0;
}