#include<iostream>
using namespace std;

// ��Ŀ�����
//��ʽ  ���ʽ? �����ʽΪ����ִ��:�����ʽΪ����ִ��;


int main() {

	//����3������
	//��ab���Ƚϣ���ĸ�ֵ��c
	int a, b, c;
	cout << "��ֱ�����������" << endl;
	cin >> a >> b;
	c = a > b ? a : b;
	cout << c<<endl;
	//��c++����Ŀ��������ص��Ǳ�������������������ֵ;
	(a > b ? a : b) = 100;//��100������ı���
	cout << a << endl;
	system("pause");
	return 0;
}