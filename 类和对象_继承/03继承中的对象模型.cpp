#include<iostream>
using namespace std;
class Htmlpage {
public:
	int m_1;
protected:
	int m_2;
private:
	int m_3;
};

class C : public Htmlpage//�������ø����ʽ��
{
public:
	int m_1;
};


void test() {
	C c;
	cout << "size of c=" << sizeof(C)<<endl;

	
}

int main() {
	//����Ӹ���̳У��ǽ������ȫ�����Զ��̳й��������Ǳ������Զ���˽�������ˡ�
	//���ÿ�����Ա����߲鿴
	//�����Ӧ��·�� ����cl /d1 reportSingleClassLayoutl���� �ļ���tab��ȫ��
	
	test();

	return 0;
}