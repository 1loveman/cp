//#include<iostream>
//using namespace std;
//
//class Person {
//	friend void test();//全局函数做友元
//private:
//	int m_num;
//	int* weight;
//public:
//	Person() :m_num(10),weight(new int(10)) {
//
//	}
//	Person(const Person& p) {//浅拷贝
//		m_num = p.m_num;
//		weight = p.weight;
//	}
//	~Person() {
//		if (weight != NULL) {
//			delete weight;
//			weight = NULL;
//		}
//	}
//	Person& operator=(Person& p) {//该函数是重载赋值运算符，跟拷贝函数无关。
//		//编译器自带的重载是浅拷贝所以需要修改。
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
//	p1 = p2 = p3;//链式调用。
//	cout << *p1.weight << endl;
//	cout << *p2.weight << endl;
//	cout << *p3.weight << endl;
//}
//
//int main() {
//	//赋值运算符重载
//	//在编译器中默认至少提供四个函数  构造无参函数体为空  析构无参函数体为空 默认拷贝，拷贝属性值  赋值运算符，对属性值进行拷贝
//	//operator=
//	//为了防止浅拷贝造成堆区重复释放，可以自己提供深拷贝函数，或是重载赋值运算符。
//	test();
//
//
//	return 0;
//}