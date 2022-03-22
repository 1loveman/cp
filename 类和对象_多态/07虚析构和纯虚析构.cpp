//#include<iostream>
//using namespace std;
//
//class Animal {
//public:
//	Animal() {
//		cout << "Animal构造函数调用" << endl;
//	}
//	~Animal() {
//		cout << "Animal析构函数调用" << endl;
//	}
//	virtual void speak() = 0;
//
//};
//
//class Cat :public Animal {
//public:
//	Cat() {
//		cout << "Cat构造函数调用" << endl;
//	}
//	~Cat() {//并不会调用子类的实析构函数
//		cout << "Cat析构函数调用" << endl;
//	}
//	void speak() {
//		cout << "小猫在叫" << endl;
//	}
//};
//
//void dospeak(Animal* animal) {
//	animal->speak();
//	delete animal;//释放父类指针的空间并不会调用子类的析构函数。所以如果子类有数据开辟在堆区则会导致内存泄漏。
//}
//
//class Animal2 {
//public:
//	Animal2() {
//		cout << "Animal2构造函数" << endl;
//	}
//	virtual  ~Animal2() {//虚析函数，当父类存在虚析函数时，可以调用子类的析构函数，同时父类可以创建实例对象
//		cout << "Animal2析构造函数" << endl;
//	}
//	//当然存在纯虚析函数也可以调用子类的析构函数，但是父类属于抽象类不可创建实例对象。
//	//纯虚析构使用之后必须在类外初始化；
//	//virtual  ~Animal2() = 0;
//	virtual void speak() = 0;
//};
//
////Animal2::~Animal2() {
////
////}
//
//class Cat2: public Animal2{
//public:
//	Cat2() {
//		cout << "Cat2构造函数" << endl;
//	}
//	~Cat2() {
//		cout << "Cat2析构造函数" << endl;
//	}
//	void speak() {
//		cout << "小猫2在叫" << endl;
//	}
//
//};
//
//void dospeak(Animal2* animial2) {
//	animial2->speak();
//	delete animial2;
//}
//
//
//void test() {
//	dospeak(new Cat);
//	dospeak(new Cat2);
//}
//
//
//int main() {
//	//父类指针或引用指向子类，当释放父类指针时不会调用子类的析构函数，从而可能导致内存泄漏。需要将父类的析构改成虚析构或者纯虚析构。
//
//	test();
//	system("pause");
//	return 0;
//}