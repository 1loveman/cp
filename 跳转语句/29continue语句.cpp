#include<iostream>
using namespace std;

int main() {
	
	//continue���
	//��ѭ������У���������ѭ��
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;// i=5ʱ��������ֱ��ִ����һ��ѭ��
		}
		cout << "**********" << i << endl;
	}
	//���100���ڵ�ż��
	for (int j = 0; j < 100; j++) {
		if (j % 2) {
			continue;
		}
		cout << j << endl;
	}
	
	system("pause");
	return 0;
	
}