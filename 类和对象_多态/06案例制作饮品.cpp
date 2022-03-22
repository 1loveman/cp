//#include<iostream>
//using namespace std;
//
//class BasicDrink {
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void Pourincup() = 0;
//	virtual void PutSomething() = 0;
//	void start() {
//		Boil();
//		Brew();
//		Pourincup();
//		PutSomething();
//	}
//};
//
//class Coffice:public BasicDrink {
//public:
//	void Boil() {
//		cout << "ÖóË®" << endl;
//	}
//	void Brew() {
//		cout << "³åÅÝ¿§·È" << endl;
//	}
//	void Pourincup(){
//		cout << "µ¹Èë±­ÖÐ" << endl;
//	}
//	void PutSomething() {
//		cout << "¼ÓÌÇºÍÅ£ÄÌ" << endl;
//	}
//};
//class Tea :public BasicDrink {
//public:
//	void Boil() {
//		cout << "ÖóË®" << endl;
//	}
//	void Brew() {
//		cout << "³åÅÝ²èÒ¶" << endl;
//	}
//	void Pourincup() {
//		cout << "µ¹Èë±­ÖÐ" << endl;
//	}
//	void PutSomething() {
//		cout << "¼ÓÄûÃÊ" << endl;
//	}
//};
//
//void dowork(BasicDrink* drink) {
//	drink->start();
//	delete drink;
//}
//
//void test() {
//	cout << "------------" << endl;
//	cout << "ÖÆ×÷¿§·È" << endl;
//	dowork(new Coffice);
//	cout << "------------" << endl;
//	cout << "ÖÆ×÷²èÒ¶" << endl;
//	dowork(new Tea);
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}