#include<iostream>
using namespace std;

class person {
public:
	person() {
		cout << "默认构造函数" << endl;
	}
	person(int h, int weight) {
		m_H = h;
		m_Weight = new int(weight);
		cout << "有参构造函数" << endl;
	}
	person(const person& p) {//浅拷贝
		m_H = p.m_H;
		m_Weight = p.m_Weight;
		cout << "拷贝构造函数" << endl;
	}
	//person(const person& p) {
	//	//深拷贝
	//	m_H = p.m_H;
	//	m_Weight = new int(*p.m_Weight);
	//	cout << "深拷贝构造函数" << endl;
	//}
	~person() {
		if(m_Weight!=NULL){
			delete m_Weight;
			m_Weight = NULL;
		}
		cout << "析构函数" << endl;
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
	//深拷贝与浅拷贝
	//编译器提供的为浅拷贝，当成员属性为指针时且空间为开辟的堆，当浅拷贝过后析构函数释放会重复释放同一堆区的内存造成非法访问
	//解决方法 拷贝时将作为深拷贝 不拷贝指针地址，而是重新开辟一段堆区内存空间将值拷入
	test();
	system("pause");
	return 0;
}