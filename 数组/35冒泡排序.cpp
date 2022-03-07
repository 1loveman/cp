#include<iostream>
using namespace std;

int main() {
	//冒泡排序
	//将数组{4,2,8,0,5,7,1,3,9}按升序排列
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int tmp;
	cout << "排序前" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i];
	}
	cout << endl;
	//冒泡排序每轮都会排出一个大的位,轮数为数组元素个数-1
	for (int i = 0; i< sizeof(arr) / sizeof(arr[0]) - 1; i++) {
		//每轮比较次数为数组长度-1-轮数i
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = tmp;
			}
		}
	}
	cout << "排序后" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i];
	}
	cout << endl;
	system("pause");
	return 0;
}