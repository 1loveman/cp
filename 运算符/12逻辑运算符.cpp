#include<iostream>
using namespace std;

int main() {
	//�߼������
	// �߼������----- ! && ||
	//c++�з���Ϊ��

	//  ! ----ȡ��
	cout << (0) << endl;
	cout << (!0) << endl;
	cout << (1) << endl;
	cout << (!1) << endl;
	//  && ---ͬ��Ϊ��
	cout << (0&&0) << endl;
	cout << (0 && 1) << endl;
	cout << (1 && 0) << endl;
	cout << (1 && 1) << endl;
	//  || ---ͬ��Ϊ��
	cout << (0 || 0) << endl;
	cout << (0 || 1) << endl;
	cout << (1 || 0) << endl;
	cout << (1 || 1) << endl;
	system("pause");
	return 0;
}