#include<iostream>
using namespace std;


//�����Ķ���
/*
��������ֵ  ������(�������� �βΣ��������� �β�){
	���;
	return ���ʽ;
}


*/
//���������������ݣ���Ӻ󷵻ؼӺ�
int add(int num1, int num2) {
	return num1 + num2;
}


int main() {
	int a = 10;
	int b = 20;
	int sum = add(a, b);//�����ĵ��� ������(ʵ�Σ�ʵ��)���ڵ��õ�ʱ����ʵ��
	cout << sum << endl;
	a = 20;
	b = 40;
	sum = add(a, b);//�����ĵ���
	cout << sum << endl;
	system("pause");
	return 0;
}