//#include<iostream>
//using namespace std;
//
//class Animal {
//public:
//	Animal() {
//		cout << "Animal���캯������" << endl;
//	}
//	~Animal() {
//		cout << "Animal������������" << endl;
//	}
//	virtual void speak() = 0;
//
//};
//
//class Cat :public Animal {
//public:
//	Cat() {
//		cout << "Cat���캯������" << endl;
//	}
//	~Cat() {//��������������ʵ��������
//		cout << "Cat������������" << endl;
//	}
//	void speak() {
//		cout << "Сè�ڽ�" << endl;
//	}
//};
//
//void dospeak(Animal* animal) {
//	animal->speak();
//	delete animal;//�ͷŸ���ָ��Ŀռ䲢��������������������������������������ݿ����ڶ�����ᵼ���ڴ�й©��
//}
//
//class Animal2 {
//public:
//	Animal2() {
//		cout << "Animal2���캯��" << endl;
//	}
//	virtual  ~Animal2() {//���������������������������ʱ�����Ե������������������ͬʱ������Դ���ʵ������
//		cout << "Animal2�����캯��" << endl;
//	}
//	//��Ȼ���ڴ���������Ҳ���Ե���������������������Ǹ������ڳ����಻�ɴ���ʵ������
//	//��������ʹ��֮������������ʼ����
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
//		cout << "Cat2���캯��" << endl;
//	}
//	~Cat2() {
//		cout << "Cat2�����캯��" << endl;
//	}
//	void speak() {
//		cout << "Сè2�ڽ�" << endl;
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
//	//����ָ�������ָ�����࣬���ͷŸ���ָ��ʱ�����������������������Ӷ����ܵ����ڴ�й©����Ҫ������������ĳ����������ߴ���������
//
//	test();
//	system("pause");
//	return 0;
//}