//#include<iostream>
//using namespace std;
//
////����������
//class BaseCalculator {
//public:
//	virtual int getResult(){
//		return 0;
//	}
//	int num1;
//	int num2;
//};
//class sumCalculator:public BaseCalculator {
//	int getResult() {
//		return num1 + num2;
//	}
//};
//
//class subCalculator :public BaseCalculator {
//	int getResult() {
//		return num1 - num2;
//	}
//};
//
//class ampCalculator :public BaseCalculator {
//	int getResult() {
//		return num1 * num2;
//	}
//};
//
//void test() {
//
//	BaseCalculator* abc = new sumCalculator;//����ָ�������ָ���������
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;
//	delete abc;
//	abc = new subCalculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << " - " << abc->num2 << " = " << abc->getResult() << endl;
//	delete abc;
//	abc = new ampCalculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << " * " << abc->num2 << " = " << abc->getResult() << endl;
//	delete abc;
//}
//
//
//int main() {
//	//��̬�����ĺô�
//	//��������������ά��
//	//��չ���� �޸Ĺر�
//	test();
//
//	system("pause");
//	return 0;
//}