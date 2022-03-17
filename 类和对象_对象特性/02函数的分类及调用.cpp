//#include<iostream>
//using namespace std;
//
//class person {
//public:
//	//构造函数分为有参函数或者无参函数
//	//或者普通函数和拷贝函数
//
//
//	//此处写这么多的构造函数因为函数的重载。
//	//无参函数
//	person() {
//		cout << "this is 无参函数" << endl;
//	}
//	//有参函数
//	person(int a) {
//		cout << "this is 有参函数" << endl;
//	}
//	//拷贝函数
//	person(const person& p) {//拷贝函数仅可读。
//		cout << "this is person" << endl;
//	}
//	
//	~person() {
//		cout << "this is ~person" << endl;
//	}
//
//};
//
//
//int main() {
//	//函数的调用方法
//
//	//括号
//	//均不能单独使用构造函数，都是通过创建类调用。
//	person p1;//此处调用的是无参构造函数不可在p1后加()，编译器会认为person p1();是函数的声明
//	person p2(10);//此处调用的是有参函数
//	person p3(p2);//拷贝调用。
//	//显式
//	person p_3;//无参
//	person p_1 = person(10);//有参  //其中person（10）;称为匿名对象,在这行结束系统立即回收 。
//	person p_2 = person(p2);//拷贝
//	
//	person() = person(p1);//此处也存在问题此处构建了两次 构建构建析构析构
//	person(p1);//不要利用拷贝构建函数初始化匿名对象；编译器会认为person(p3) == person p3; 函数重定义了
//	//隐式
//	person p__1;
//	person p__2 = 10;
//	person p__3 = p1;
//
//
//	return 0;
//}