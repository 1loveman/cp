//#include<iostream>
//using namespace std;
//
//class Person {
//	friend ostream& operator<<(ostream& cout, Person& p);//Ϊ����˽�У���Ҫ��ȫ�ֺ�����Ϊ��Ԫ��
//private:
//	int m_Height;
//	int m_Weight;
//public:
//	Person() :m_Height(10), m_Weight(10) {
//
//	}
//};
//
//
//ostream& operator<<(ostream& cout,Person& p) {//�˴��βο��Բ�дcout ��Ϊ�˴�Ϊ���� ��������ȡ����
//	cout << "���Ϊ" << p.m_Height << "����Ϊ" << p.m_Weight << endl;
//	return cout;
//}
//
//int main() {
//	//���������������ֻ��ͨ��ȫ�ֺ�����ͨ����Ա�������޷�ʵ�ֵ�
//
//	Person p;
//	operator<<(cout, p)<< p;//���� //���Ҵ˴�������ʽ���˼�룬operator<<(cout, p)����ֵΪcout���Ϻ���Ϊ cout<<p;
//	cout << p << endl;//һ��д��
//	return 0;
//}