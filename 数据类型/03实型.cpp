#include<iostream>
using namespace std;

int main() {
	//ʵ��(������)��Ϊ���֣�ʵ�ʶ�ֻ��ʾ6λ��Ч���֣����Ǿ�ȷλ����һ��
	//�����ȸ�����
	float a1 = 3.14f;
	cout << "float��ռ�ֽ���Ϊ��" << sizeof(float) << endl;//ռ�ĸ��ֽڣ���Ч����7λ
	//˫���ȸ�����
	double a2 = 3.14;
	cout << "double��ռ�ֽ���Ϊ��" << sizeof(double) << endl;//ռ�˸��ֽڣ���Ч����15-16λ
	//��ѧ��������ʾС��
	//3e3(3*10^3)   3e-3(3*0.1^3)
	system("pause");
	return 0;
}