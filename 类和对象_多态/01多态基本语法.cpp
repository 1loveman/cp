#include<iostream>
using namespace std;

class Animal {
public:
	virtual void speak() {//�麯�� ��ַ���ڴ�����δ��
		cout << "������˵��" << endl;
	}
};

class Cat:public Animal {
	void speak() {
		cout << "Сè��˵��" << endl;
	}
};

class dog {
	void speak() {
		cout << "С����˵��" << endl;
	}
};
//���� Animal& animal=c;�������û���ָ��ָ������
void Speak(Animal& animal) {
	//�˴���ַ��󶨣���������ɶ���Ƕ�����˵��
	animal.speak();
}

void test() {
	Cat c;
	Speak(c);

}
int main() {
	//��̬��Ϊ��̬�Ͷ�̬
	//��̬��̬Ϊ�������أ����������ء�			��ַ��� �ڱ���֮���ַ���Ѿ�ȷ����
	//��̬��̬Ϊ������麯��ʵ�����ж�̬		��ַ��� �ڳ�������ʱ��ַ�ٰ�
	//��̬��̬��������  1 �̳й�ϵ 2������д�����麯����
	test();


	system("pause");
	return 0;
}