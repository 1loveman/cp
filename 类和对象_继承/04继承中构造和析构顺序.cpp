#include<iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "���ǻ���Ĺ��캯��" << endl;
	}
	~Base() {
		cout << "���ǻ������������" << endl;
	}
};
class Son : public Base
{
public:
	Son() {
		cout << "����������Ĺ��캯��" << endl;
	}
	~Son() {
		cout << "�������������������" << endl;
	}
};

void test() {
	Son s;
}

int main() {
	//ͬ������Աһ�����ȹ��츸�࣬�ٹ������࣬�����������࣬���������ࡣ
	test();

	return 0;
}