#include<iostream>
using namespace std;

int main() {
	//break���

	//��switch��ʹ��
	// ����switch
	int val;
	cout << "������val��" << endl;
	cin >> val;
	switch (val) {
	case 0:cout << val;
		break;  //ִ�������ֱ�ӽ���switch
	case 1:cout << val<<endl;
		break;
	case 2:cout << val<<endl;
		break;
	case 3:cout << val<<endl;
		break;
	default:cout << "����" << endl;
		break;
	}
	cout << "������" << endl;


	//��ѭ�������ʹ��
	//ֱ���˳�ѭ��
	for (int i = 0; i < 10; i++) {
		if (i==5) {
			break;
		}
		cout << i << endl;
	}


	//��Ƕ��ѭ�������ʹ��
	//�˳��ڴ�ѭ�� ��Ӱ���ⲿѭ��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}