#include<iostream>
using namespace std;

#include<string>
int main() {
	//���ݵ�����
	// �Ӽ��̻�ȡ����
	//�ؼ���cin��
	//�﷨cin>>����

	//��������
	int a1;
	cout << "���������α�����ֵ" << endl;
	cin >> a1;
	cout << "a1=" << a1 << endl;
	//����������
	double a2;
	cout << "�����븡���α�����ֵ" << endl;
	cin >> a2;
	cout << "a2=" << a2 << endl;
	//�ַ�������
	char a3;
	cout << "�������ַ��α�����ֵ" << endl;
	cin >> a3;
	cout << "a3=" << a3 << endl;
	//�ַ���������
	string a4;
	cout << "�������ַ����α�����ֵ" << endl;
	cin >> a4;
	cout << "a4=" << a4 << endl;
	//������������
	bool a5;
	cout << "�����벼���ͱ�����ֵ" << endl;//0Ϊ�٣���0Ϊ�档
	cin >> a5;
	cout << "a5=" << a5 << endl;
	system("pause");
	return 0;
}