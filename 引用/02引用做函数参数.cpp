#include<iostream>
using namespace std;

//���ô���
void swap_(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	
	//��������������
	//����������������������ʵ��;
	int a = 20;
	int b = 30;
	swap_(a,b);
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}