#include<iostream>
using namespace std;

// ����һ��ֻС�������


int main() {
	int pig1, pig2, pig3;
	//�����һֻС������أ�
	cout << "�������һֻС�����أ�" << endl;
	cin >> pig1;
	cout << "������ڶ�ֻС�����أ�" << endl;
	cin >> pig2;
	cout << "���������ֻС�����أ�" << endl;
	cin >> pig3;
	if (pig1 > pig2 && pig1 > pig3) {
		cout << "��һֻС������" << endl;
	}
	else if (pig2 > pig1 && pig2 > pig3) {
		cout << "�ڶ�ֻС������" << endl;
	}
	else {
		cout << "����ֻС������" << endl;
	}
	system("pause");
	return 0;
}