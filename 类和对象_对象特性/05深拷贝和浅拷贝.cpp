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
	/*person(const person& p) {
		m_H = p.m_H;
		m_Weight = p.m_Weight;
		cout << "拷贝构造函数" << endl;
	}*/
	~person() {
		cout << "析构函数" << endl;
	}
public:
	int m_H;
	int* m_Weight;
};



int main() {
	//深拷贝与浅拷贝
	//编译器提供的为浅拷贝，当成员属性为指针时且空间为开辟的堆，当拷贝过后析构函数释放会造成非法访问
	person p(10, 20);
	cout << *p.m_Weight << endl;
	person p1(p);
	cout << *p1.m_Weight << endl;
	system("pause");
	return 0;
}