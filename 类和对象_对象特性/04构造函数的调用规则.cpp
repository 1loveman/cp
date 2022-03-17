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
//	int age=0;
//};
//
//
//int main() {
//	//调用规则
//	//一般默认提供至少三种
//	// 默认构造函数（空）
//	// 析构函数（空）
//	//拷贝构造函数（全部拷贝）
//
//	//当用户提供了参数函数之后，编译器不再提供默认构造函数
//	//当用户提供了拷贝函数之后，编译器不再提供其他构造函数
//	
//	return 0;
//}