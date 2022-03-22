//#include<iostream>
//using namespace std;
//
////计算器基类
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
//	BaseCalculator* abc = new sumCalculator;//父类指针或引用指向子类对象
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
//	//多态带来的好处
//	//调理清晰，方便维护
//	//拓展开放 修改关闭
//	test();
//
//	system("pause");
//	return 0;
//}