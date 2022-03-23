#include<iostream>
using namespace std;

class Animal {
public:
	virtual void speak() {//虚函数 地址在内存中尚未绑定
		cout << "动物在说话" << endl;
	}
};

class Cat:public Animal {
	void speak() {
		cout << "小猫在说话" << endl;
	}
};

class dog {
	void speak() {
		cout << "小狗在说话" << endl;
	}
};
//允许 Animal& animal=c;父类引用或者指针指向子类
void Speak(Animal& animal) {
	//此处地址早绑定，不管输入啥都是动物在说话
	animal.speak();
}

void test() {
	Cat c;
	Speak(c);

}
int main() {
	//多态分为静态和动态
	//静态多态为函数重载，操作符重载。			地址早绑定 在编译之后地址就已经确定了
	//动态多态为子类和虚函数实现运行多态		地址晚绑定 在程序运行时地址再绑定
	//动态多态满足条件  1 继承关系 2子类重写父类虚函数。
	test();


	system("pause");
	return 0;
}