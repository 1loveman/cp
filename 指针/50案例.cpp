#include<iostream>
using namespace std;

void bu(int* p, int numsSize) {
	for (int i = 0; i < numsSize - 1; i++) {
		for (int j = 0; j < numsSize - 1 - i; j++) {
			if (p[j] > p[j + 1]) {
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
	
}

int main() {
	//��װһ�����飬����ð������ʵ�ֶ����������ð������

	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	cout << "����ǰ" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	bu(arr, sizeof(arr) / sizeof(arr[0]));
	cout << "�����" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}