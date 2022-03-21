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
//	bool operator==(Person& p) {//关系运算符重载，，用bool类型。
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
//		cout << "相等" << endl;
//	}
//	else {
//		cout << "不相等" << endl;
//	}
//	if (p == p3) {
//		cout << "相等" << endl;
//	}
//	else {
//		cout << "不相等" << endl;
//	}
//}
//
//int main() {
//	//比较类的两个对象是否相等。其他关系运算符类似。
//	test();
//
//	return 0;
//}