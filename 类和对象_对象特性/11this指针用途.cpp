#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		this->age = age;//�������ֲ�ͬ������
	}
	Person& PersonAddage(Person &p) {//�����Ҫ���ر�����Ҫ�����������͡�//���˴���ʹ�����ã����Ǵ���һ���µ�p1����ԭp1�޹�;
		this->age += p.age;
		return *this;//����p1
	}
	int age;
	
};

void test() {
	Person p(10);
	Person p1(10);						//��ʽ���˼��
	p1.PersonAddage(p).PersonAddage(p);//����p1.PersonAddage(p)���ú󷵻�p1��������ŵ��á�
	cout<<"p1:"<<p1.age<<endl;
}


int main() {
	//thisָ��ָ�򱻵����������ĺ��������Ҿ�̬��Ա�����������У����������ֱ��ʹ��

	//thisָ���ʹ��
	//���β��������������ͬ��ʱ
	
	//��Ϊ����ֵ���ر����ú�����������
	test();


	system("pause");
	return 0;
}#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		this->age = age;//�������ֲ�ͬ������
	}
	Person& PersonAddage(Person &p) {//�����Ҫ���ر�����Ҫ�����������͡�//���˴���ʹ�����ã����Ǵ���һ���µ�p1����ԭp1�޹�;
		this->age += p.age;
		return *this;//����p1
	}
	int age;
	
};

void test() {
	Person p(10);
	Person p1(10);						//��ʽ���˼��
	p1.PersonAddage(p).PersonAddage(p);//����p1.PersonAddage(p)���ú󷵻�p1��������ŵ��á�
	cout<<"p1:"<<p1.age<<endl;
}


int main() {
	//thisָ��ָ�򱻵����������ĺ��������Ҿ�̬��Ա�����������У����������ֱ��ʹ��

	//thisָ���ʹ��
	//���β��������������ͬ��ʱ
	
	//��Ϊ����ֵ���ر����ú�����������
	test();


	system("pause");
	return 0;
}