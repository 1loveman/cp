#include<iostream>
using namespace std;
class Htmlpage {
public:
	void head() {
		cout << "��ҳ�������Σ���½��ע��....����ͷ��" << endl;
	}
protected:
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
class Cpp : protected Htmlpage
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
class Java : private Htmlpage
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
	c.body();//����Ȩ��
	c.tail();

	cpp.content();
	cpp.head();//����Ȩ��
	cpp.body();//����Ȩ��
	cpp.tail();

	java.content();
	java.head();//˽��Ȩ��
	java.body();//˽��Ȩ��
	java.tail();
}

int main() {
	//�̳�Ȩ��������
	//�̳�ֻ�ܼ̳и����еĹ���Ȩ�޺ͱ���Ȩ�޵����ݣ��޷��̳�˽��Ȩ�޵����ݣ�
	//���м̳У����ı�Ӹ���̳й�����Ȩ�ޣ�
	//�����̳У� ���Ӹ���̳й�����Ȩ��ȫ����Ϊ����Ȩ�ޡ�
	//˽�м̳У� ���Ӹ���̳й�����Ȩ��ȫ����Ϊ˽��Ȩ�ޡ�
	test();

	return 0;
}