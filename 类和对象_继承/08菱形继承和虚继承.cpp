#include<iostream>
using namespace std;

class Animail {
public:
	int m_age;
	int m_weight;
};

class Sheep:virtual public Animail {
public:
	
};

class Tuo :virtual public Animail {
public:
	
};

class SheepTuo:public Sheep,public Tuo {
public:
};

void test() {
	SheepTuo st;
	st.Sheep::m_age = 1;
	cout << st.Sheep::m_age << endl;
	st.Tuo::m_age = 10;
	cout << st.Tuo::m_age << endl;
	cout << st.Sheep::m_age << endl;
}
int main() {
	//���μ̳е�ȷ�� �̳������������������Դ�˷�
	//������̳�virtual ʵ�����Ǽ̳������������ָ�롣
	test();


	return 0;
}