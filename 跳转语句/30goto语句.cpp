#include<iostream>
using namespace std;

int main() {
	
	//goto���
	//��������ת��goto�������
	//��ʽgoto �����;    ��Ǹ�ʽ  �����:  
	//�����һ���ô�д��ĸ��ʾ
	//һ�㽨�鲻Ҫʹ��goto��䣬������ɳ���Ļ���;

	cout << "*********1" << endl;
	cout << "*********2" << endl;
	goto FLAG;
	cout << "*********3" << endl;
	cout << "*********4" << endl;
	cout << "*********5" << endl;
	FLAG:
	cout << "*********6" << endl;
	cout << "*********7" << endl;
	system("pause");
	return 0;
}