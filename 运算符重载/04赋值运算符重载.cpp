//#include<iostream>
//using namespace std;
//
//class Person {
//	friend void test();//ȫ�ֺ�������Ԫ
//private:
//	int m_num;
//	int* weight;
//public:
//	Person() :m_num(10),weight(new int(10)) {
//
//	}
//	Person(const Person& p) {//ǳ����
//		m_num = p.m_num;
//		weight = p.weight;
//	}
//	~Person() {
//		if (weight != NULL) {
//			delete weight;
//			weight = NULL;
//		}
//	}
//	Person& operator=(Person& p) {//�ú��������ظ�ֵ������������������޹ء�
//		//�������Դ���������ǳ����������Ҫ�޸ġ�
//		if (weight != NULL) {
//			delete weight;
//			weight = NULL;
//		}
//		m_num = p.m_num;
//		weight = new int(*(p.weight));
//		return *this;
//	}
//
//};
//
//void test() {
//	Person p1;
//	Person p2;
//	Person p3;
//	p1 = p2 = p3;//��ʽ���á�
//	cout << *p1.weight << endl;
//	cout << *p2.weight << endl;
//	cout << *p3.weight << endl;
//}
//
//int main() {
//	//��ֵ���������
//	//�ڱ�������Ĭ�������ṩ�ĸ�����  �����޲κ�����Ϊ��  �����޲κ�����Ϊ�� Ĭ�Ͽ�������������ֵ  ��ֵ�������������ֵ���п���
//	//operator=
//	//Ϊ�˷�ֹǳ������ɶ����ظ��ͷţ������Լ��ṩ����������������ظ�ֵ�������
//	test();
//
//
//	return 0;
//}