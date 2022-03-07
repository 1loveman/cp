#include<iostream>
using namespace std;

int main() {
	//申明一个五个元素的数组并将其逆置
	int tmp;
	int arr[5] = { 10,20,30,40,50 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	cout << "逆置前" << endl;
	for(int i = 0; i < 5; i++ ) {
		cout << arr[i] << endl;
	}
	//逆置	
	cout << "逆置后" << endl;
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