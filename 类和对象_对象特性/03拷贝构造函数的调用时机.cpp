//#include<iostream>
//using namespace std;
//
//class person {
//public:
//	//Ĭ�Ϲ���
//	person() {
//		cout << "this is �޲κ���" << endl;
//	}
//	//�вκ���
//	person(int a) {
//		age = a;
//		cout << "this is �вκ���" << endl;
//	}
//	//��������
//	person(const person& p) {
//		age = p.age;
//		cout << "this is ��������" << endl;
//	}
//
//	~person() {
//		cout << "this is ~person" << endl;
//	}
//public:
//	int age;
//};
//
//void test() {
//	person p(10);
//	person p_(p);
//	p_.age = 100;//������������Ӱ��ԭ����
//	cout << p_.age << endl;
//	cout << p.age << endl;
//}
//void test1(person p) {
//
//}
//void test1_() {
//	person p(10);
//	test1(p);
//}
//
//person test2() {
//	person p(10);
//	return p;
//}
//
//int main() {
//	//���������ʹ��ʱ��
//	//�����Ѿ�������ɵĶ��󴴽��µĶ���
//	test();
//	//ֵ������Ϊ����������ֵ
//	test1_();
//	//��Ϊ��������ֵ
//	person p = test2();
//	return 0;
//}