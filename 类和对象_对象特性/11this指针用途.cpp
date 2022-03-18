#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		this->age = age;//用于区分不同参数。
	}
	Person& PersonAddage(Person &p) {//如果想要返回本体需要返回引用类型。//若此处不使用引用，则是创建一个新的p1’与原p1无关;
		this->age += p.age;
		return *this;//返回p1
	}
	int age;
	
};

void test() {
	Person p(10);
	Person p1(10);						//链式编程思想
	p1.PersonAddage(p).PersonAddage(p);//其中p1.PersonAddage(p)调用后返回p1，后面接着调用。
	cout<<"p1:"<<p1.age<<endl;
}


int main() {
	//this指针指向被调函数所属的函数、并且静态成员函数都隐藏有，无需操作，直接使用

	//this指针的使用
	//当形参与所属对象参数同名时
	
	//作为返回值返回被调用函数所属函数
	test();


	system("pause");
	return 0;
}#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		this->age = age;//用于区分不同参数。
	}
	Person& PersonAddage(Person &p) {//如果想要返回本体需要返回引用类型。//若此处不使用引用，则是创建一个新的p1’与原p1无关;
		this->age += p.age;
		return *this;//返回p1
	}
	int age;
	
};

void test() {
	Person p(10);
	Person p1(10);						//链式编程思想
	p1.PersonAddage(p).PersonAddage(p);//其中p1.PersonAddage(p)调用后返回p1，后面接着调用。
	cout<<"p1:"<<p1.age<<endl;
}


int main() {
	//this指针指向被调函数所属的函数、并且静态成员函数都隐藏有，无需操作，直接使用

	//this指针的使用
	//当形参与所属对象参数同名时
	
	//作为返回值返回被调用函数所属函数
	test();


	system("pause");
	return 0;
}