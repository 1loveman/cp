#include<iostream>
using namespace std;

//��������λ��
void swap(int* p1, int* p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main() {
	//�ں���������ֵ�����β��޷��޸�ʵ��
	//ָ���������ʵ��
	int a = 10;
	int b = 20;
	cout << a << endl << b << endl;
	swap(&a, &b);
	cout << a << endl << b << endl;
	system("pause");
	return 0;
}