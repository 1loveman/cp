#include<iostream>
using namespace std;

class Person {
public:
	void ShowClassName() {
		cout << "this is person class"<<endl;
	}
	void ShowPersonAge() {
		//判读传入的指针是否为NULL
		if (this==NULL) {
			return;
		}
		cout << "年龄为：" << m_Age << endl;//此处的m_Ages实为this->m_Age; 用空指针访问会报错;
	}
	int m_Age = 10;
};

void test() {
	Person* p=NULL;
	p->ShowClassName();
	p->ShowPersonAge();//报错
}

int main() {
	//空指针访问成员函数
	//空指针不可访问成员属性，所以遇到this->成员属性可能报错
	test();

	system("pause");
	return 0;
}