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
//		cout << "��ˮ" << endl;
//	}
//	void Brew() {
//		cout << "���ݿ���" << endl;
//	}
//	void Pourincup(){
//		cout << "���뱭��" << endl;
//	}
//	void PutSomething() {
//		cout << "���Ǻ�ţ��" << endl;
//	}
//};
//class Tea :public BasicDrink {
//public:
//	void Boil() {
//		cout << "��ˮ" << endl;
//	}
//	void Brew() {
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	void Pourincup() {
//		cout << "���뱭��" << endl;
//	}
//	void PutSomething() {
//		cout << "������" << endl;
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
//	cout << "��������" << endl;
//	dowork(new Coffice);
//	cout << "------------" << endl;
//	cout << "������Ҷ" << endl;
//	dowork(new Tea);
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}