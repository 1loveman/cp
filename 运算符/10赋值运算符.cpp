#include<iostream>
using namespace std;

int main() {
	//��ֵ�����
	// ��ֵ�����----- = += -= *= /= %=
	int num1, num2;
	cout << "����num��" << endl;
	cin >> num1;

	//  =
	num2 = num1;
	cout << num2 <<endl;
	//  +=
	num1 += 2;//��num=num1+2;����ͬ��
	cout << num1 << endl;
	//  -=
	num1 -= 2;
	cout << num1 << endl;
	//  *=
	num1 *= 2;
	cout << num1 << endl;
	//  /=
	num1 /= 2;
	cout << num1 << endl;
	//  %=
	num1 %= 2;
	cout << num1 << endl;

	system("pause");
	return 0;
}