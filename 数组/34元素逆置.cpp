#include<iostream>
using namespace std;

int main() {
	//����һ�����Ԫ�ص����鲢��������
	int tmp;
	int arr[5] = { 10,20,30,40,50 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	cout << "����ǰ" << endl;
	for(int i = 0; i < 5; i++ ) {
		cout << arr[i] << endl;
	}
	//����	
	cout << "���ú�" << endl;
	while (start < end) {
		tmp = arr[end];
		arr[end] = arr[start];
		arr[start] = tmp;
		start++;
		end--;
	}
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}