#include<iostream>
using namespace std;

//������������λ��
void swap(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "���������н�����" << endl;
	cout << "a=" <<num1<< endl;
	cout << "b=" <<num2<< endl;
}


int main() {
	//������ֵ����
	int a = 10;
	int b = 20;
	cout << "����ǰ" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	swap(a, b);//�����ĵ���
	cout << "������ԭ����" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//���ab��ֵ��δ�仯���ڱ���������ֵ���ݲ�����ı�ʵ�Σ�
	system("pause");
	return 0;
}