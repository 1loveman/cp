//#include<iostream>
//using namespace std;
//
//class Animal {
//public:
//	virtual void speak() {
//		cout << "������˵��" << endl;
//	}
//};
//class Animal1 {
//public:
//	void speak() {
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal {
//	void speak() {
//		cout << "Сè��˵��" << endl;
//	}
//};
//
//class dog :public Animal1{
//	void speak() {
//		cout << "С����˵��" << endl;
//	}
//};
//
//void Speak(Animal& animal) {
//	animal.speak();
//}
//
//void test() {
//	cout << "���麯����" <<sizeof(Animal1) << endl;//һ���ֽڿ��ж� ��������λ������
//	cout << "���麯����" << sizeof(Animal) << endl;//�ĸ��ֽڣ��ɼ����麯���������ָ��
//}
//int main() {
//	//�麯���洢ʱ��������һ��vfptrָ��������� ��ָ��ָ��һ��vftable�麯���������������Ӧ�麯���ĵ�ַ ��&Animal::spesk();
//	//�̳��麯��ʱ������Ҳ���ȼ̳���ͬ��ָ��ͱ��൱�ڿ����ĸ�����ָ��ָ�򲢲��Ǹ���
//	// ���û�ж�Ӧͬ��������ֻ�̳и��࣬vftable���ڵĵ�ַҲ��&Animal::spesk();
//	//����ж�Ӧ����������д����vftable�麯������ĺ�����ַ�����Լ���  ��&Cat::speak();
//	//���û�м̳еĻ�,�������Ը�����������ָ�����࣬���м̳���virtual������̳��˸���
//	//�൱�뵱�ø������û�ָ��ָ������ʱ���ȷ��ʸ���̳еĲ��֡�
//
//
//	test();
//
//
//	system("pause");
//	return 0;
//}