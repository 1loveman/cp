//#include<iostream>
//using namespace std;
//
//class Animal {
//public:
//	virtual void speak() {
//		cout << "动物在说话" << endl;
//	}
//};
//class Animal1 {
//public:
//	void speak() {
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal {
//	void speak() {
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class dog :public Animal1{
//	void speak() {
//		cout << "小狗在说话" << endl;
//	}
//};
//
//void Speak(Animal& animal) {
//	animal.speak();
//}
//
//void test() {
//	cout << "非虚函数类" <<sizeof(Animal1) << endl;//一个字节可判断 函数并不位于类上
//	cout << "非虚函数类" << sizeof(Animal) << endl;//四个字节，可见在虚函数上面加了指针
//}
//int main() {
//	//虚函数存储时，将产生一个vfptr指针放于类上 该指针指向一个vftable虚函数表，表里面存放这对应虚函数的地址 即&Animal::spesk();
//	//继承虚函数时，子类也会先继承相同的指针和表，相当于拷贝的副本，指针指向并不是父表，
//	// 如果没有对应同名函数就只继承父类，vftable表内的地址也是&Animal::spesk();
//	//如果有对应函数，则重写，将vftable虚函数表里的函数地址换成自己的  即&Cat::speak();
//	//如果没有继承的话,将不可以父类类型引用指向子类，若有继承无virtual，子类继承了父类
//	//相当与当用父类引用或指针指向子类时，先访问父类继承的部分。
//
//
//	test();
//
//
//	system("pause");
//	return 0;
//}