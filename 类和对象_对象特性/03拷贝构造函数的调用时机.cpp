//#include<iostream>
//using namespace std;
//
//class person {
//public:
//	//默认构造
//	person() {
//		cout << "this is 无参函数" << endl;
//	}
//	//有参函数
//	person(int a) {
//		age = a;
//		cout << "this is 有参函数" << endl;
//	}
//	//拷贝函数
//	person(const person& p) {
//		age = p.age;
//		cout << "this is 拷贝函数" << endl;
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
//	p_.age = 100;//拷贝过来不会影响原数据
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
//	//拷贝构造的使用时机
//	//利用已经创建完成的对象创建新的对象
//	test();
//	//值传递作为函数参数的值
//	test1_();
//	//作为函数返回值
//	person p = test2();
//	return 0;
//}