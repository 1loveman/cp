#include<iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& cout,const Person& p);
public:
	Person() :m_nums(10) {

	}
	//��Ա������ʽ
	//�Ӻ�ȡֵ��ǰ�õ���
	Person& operator++() {//���ñ�֤ÿ�ζ���ͬһ��ֵ
		m_nums++;
		return *this;
	}
	//��ǰȡֵ�����õ���
	Person operator++(int) {
		Person temp = *this;
		m_nums++;
		return temp;
	}
private:
	int m_nums;
};

//��������
ostream& operator<<(ostream& cout, const Person& p) {//�˴���������þͱ����const ��Ϊֻ��const Person& p�����ձ�����ֵ��
	cout << p.m_nums;								//�����Person &p ֻ�ܽ��ձ���,���޷����պ��üӼӷ��ص�ֵ;
	return cout;									//������Person p����Ϊ�ȿ��Դ�������ֿ��Դ����Ӧ����ֵ
}

int main() {
	//�������������
	//��Ա������ʽ
	Person p;
	cout << (++p) << endl;
	cout << p << endl;
	Person p1;
	//ȫ�ֺ�����ʽ
	cout << p1++ << endl;
	cout << p1 << endl;
	system("pause");
	return 0;
}

//�����βκͷ���ֵ
//�β�Ϊ��ʽ�����Ǳ���������������Ĳ��������Ǳ���Ҳ�����Ƕ�Ӧ���͵�ֵ
//����ֵ//�������ݵ�����.������ֵ����Ϊ����ʱ�������Ϊ�Ƿ����˶�Ӧ���͵ı��������Կ����ö�Ӧ���ͱ������ա�������Ϊֵ��