//#include<iostream>
//using namespace std;
//
//class Person {
//private:
//	string m_Name;
//	int m_Age;
//public:
//	Person(string name,int age) {
//		m_Name = name;
//		m_Age = age;
//	}
//	bool operator==(Person& p) {//��ϵ��������أ�����bool���͡�
//		if (this->m_Name == p.m_Name&&this->m_Age==p.m_Age) {
//			return true;
//		}
//		return false;
//	}
//};
//
//void test() {
//	Person p("zhang", 10);
//	Person p2("zhang", 10);
//	Person p3("zhan", 20);
//	if (p == p2) {
//		cout << "���" << endl;
//	}
//	else {
//		cout << "�����" << endl;
//	}
//	if (p == p3) {
//		cout << "���" << endl;
//	}
//	else {
//		cout << "�����" << endl;
//	}
//}
//
//int main() {
//	//�Ƚ�������������Ƿ���ȡ�������ϵ��������ơ�
//	test();
//
//	return 0;
//}