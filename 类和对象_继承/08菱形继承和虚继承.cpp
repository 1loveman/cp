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
	//菱形继承的确点 继承了两份数据造成了资源浪费
	//采用虚继承virtual 实质上是继承了两个虚基类指针。
	test();


	return 0;
}