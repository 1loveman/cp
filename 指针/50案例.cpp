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
	//封装一个数组，利用冒泡排序，实现对整型数组的冒泡排序

	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	cout << "排序前" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	bu(arr, sizeof(arr) / sizeof(arr[0]));
	cout << "排序后" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}