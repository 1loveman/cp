#include<iostream>
using namespace std;

class Person {
public:
	void ShowClassName() {
		cout << "this is person class"<<endl;
	}
	void ShowPersonAge() {
		//�ж������ָ���Ƿ�ΪNULL
		if (this==NULL) {
			return;
		}
		cout << "����Ϊ��" << m_Age << endl;//�˴���m_AgesʵΪthis->m_Age; �ÿ�ָ����ʻᱨ��;
	}
	int m_Age = 10;
};

void test() {
	Person* p=NULL;
	p->ShowClassName();
	p->ShowPersonAge();//����
}

int main() {
	//��ָ����ʳ�Ա����
	//��ָ�벻�ɷ��ʳ�Ա���ԣ���������this->��Ա���Կ��ܱ���
	test();

	system("pause");
	return 0;
}