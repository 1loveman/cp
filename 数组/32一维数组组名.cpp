#include<iostream>
using namespace std;

int main() {
	//һά������
	//������������׵�ַ
	int arr[5] = {0,1,2,3,4};
	cout << arr << endl;
	cout << &arr[0] << endl;//��֪������׵�ַ�������һ��Ԫ���׵�ַ��ͬ;
	//����������ĳ���
	cout << sizeof(arr)<<endl;//������ռ�ռ��С
	cout << sizeof(arr[0]) << endl;//��һ��Ԫ����ռ�ڴ�ռ�
	cout << sizeof(arr) / sizeof(arr[0]) << endl;//���鳤��
	
	system("pause");
	return 0;
}