#include<iostream>
using namespace std;

int main() {
	//ð������
	//������{4,2,8,0,5,7,1,3,9}����������
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int tmp;
	cout << "����ǰ" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i];
	}
	cout << endl;
	//ð������ÿ�ֶ����ų�һ�����λ,����Ϊ����Ԫ�ظ���-1
	for (int i = 0; i< sizeof(arr) / sizeof(arr[0]) - 1; i++) {
		//ÿ�ֱȽϴ���Ϊ���鳤��-1-����i
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = tmp;
			}
		}
	}
	cout << "�����" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i];
	}
	cout << endl;
	system("pause");
	return 0;
}