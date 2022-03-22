//#include<iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual void xu() = 0;//纯虚数
//};
//
//class person1:public Base {
//public:
//	void xu() {
//		cout << "调用" << endl;
//	}
//	
//};
//
//class person2 :public Base {
//public:
//
//};
//
//void test() {
//	//只有类内部含有纯虚函数该类就称为抽象类。
//	// 抽象类不可以实例化对象
//	Base b;//报错
//	//纯虚函数格式写法
//	//virtual 数据类型 函数名（形参列表）=0;
//	//基类是抽象类那么其派生类必须重写，不然该派生类也会变为抽象类
//	Base* abc = new person1;
//	abc->xu();
//	delete abc;
//	abc = new person2;//person为抽象类不可有创建实例对象
//	
//	
//}
//
//
//int main() {
//	//多态带来的好处
//	//调理清晰，方便维护
//	//拓展开放 修改关闭
//	test();
//
//	system("pause");
//	return 0;
//}