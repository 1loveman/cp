#include<iostream>
using namespace std;
class Htmlpage {//����
public:
	void head() {
		cout << "��ҳ�������Σ���½��ע��....����ͷ��" << endl;
	}
	void body() {
		cout << "�������ģ�����������վ�ڵ�ͼ�����������ײ�" << endl;
	}
};

class C : public Htmlpage//�������ø����ʽ��
{
public:
	void content() {
		cout << "c������ѵ������content" << endl;
	}
	void tail() {
		cout << "�ײ�������tail" << endl;
		cout << "--------------" << endl;
	}

};
class Cpp : public Htmlpage
{
public:
	void content() {
		cout << "cpp������ѵ������content" << endl;
	}
	void tail() {
		cout << "�ײ�������tail" << endl;
		cout << "--------------" << endl;
	}

};
class Java : public Htmlpage
{
public:
	void content() {
		cout << "java������ѵ������content" << endl;
	}
	void tail() {
		cout << "�ײ�������tail" << endl;
		cout << "--------------" << endl;
	}

};

void test() {
	C c;
	Cpp cpp;
	Java java;
	c.content();
	c.head();
	c.body();
	c.tail();

	cpp.content();
	cpp.head();
	cpp.body();
	cpp.tail();

	java.content();
	java.head();
	java.body();
	java.tail();
}

int main() {
	//�̳�
	//���Լ����ظ��Ĵ���
	//�﷨ class ������: ����Ȩ�� ������
	//�����ֳ��������࣬�и���Ĺ��ԣ�Ҳ���Լ��ĸ���
	//�����ֳ�������
	test();

	return 0;
}