#include<iostream>
using namespace std;
#include<string>

class phone {
public:
	static void func() {//��̬��Ա����Ҳ�з���Ȩ�ޣ���Ϊprivateʱ��ͨ���������ɷ��ʣ�
		m_Pname = "����";//��̬��Ա�������Է��ʾ�̬��Ա����
		price = 20;//�޷��������ĸ���������ԣ���̬��Ա�������ܵ��÷Ǿ�̬
		cout << "��̬��Ա����" << endl;

	}
	static string m_Pname;//��̬��Ա�������ص���������������ó�ʼ��
	int price;

};

string phone::m_Pname;//��ʼ��

int main() {
	//��̬��Ա����
	
	//�ص�
	//���еľ�̬��Ա������ͬʹ��һ����̬����
	//��̬����ֻ�ܷ��ʾ�̬��Ա����

	//��̬��Ա�����ĵ��÷�ʽ
	//ͨ���������

	//��̬��Ա����Ҳ�з���Ȩ�ޣ���Ϊprivateʱ��ͨ���������ɷ��ʣ�
	phone p;
	p.func();
	//ͨ������
	phone::func();
	system("pause");
	return 0;
}