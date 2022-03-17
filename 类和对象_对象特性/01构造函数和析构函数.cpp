//#include<iostream>
//using namespace std;
//
//class person {
//public:
//
//	//类的构造函数和析构函数
//	//构造函数
//	//在类第一次调用的时候调用
//	//没有返回类型
//	//函数名与类名相同
//	//可以传入形参可重载
//	person() {
//		cout << "this is person" << endl;
//	}
//	//析构函数
//	//在类释放的时候调用
//	//没有返回值
//	//函数名为类名之前加~
//	//不可传入形参不可重载
//	~person() {
//		cout << "this is ~person" << endl;
//	}
//
//};
//void test() {
//	person p;
//}
//
//int main() {
//	
//	test();
//	person a;//析构函数是在a释放时才调用。
//
//
//	return 0;
//}