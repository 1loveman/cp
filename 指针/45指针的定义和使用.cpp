#include<iostream>
using namespace std;

int main() {
	//ָ��
	//ר��������ŵ�ַ�ı���
	//��ʽ �������� * ָ���� =ָ��ָ���ַ;//�˴���ַͨ��Ϊ&������������ָ�룬������ֱ��д��ַ
	int a = 10;
	int* p=&a;
	cout << &a << endl;
	cout << p << endl;
	//ָ���ʹ��  *�����ò���
	*p = 30;
	cout << a << endl;
	cout << *p << endl;//ͨ��p�еĵ�ַ��ֱ�ӶԵ�ַ����Ӧ�Ŀռ����
	system("pause");
	return 0;
}