#include<iostream>
using namespace std;

int main() {
	//��ά��������
	//���ڼ�������Ԫ�ظ���
	int arr[][3] = { 1,2,3,4,5,6 };
	cout << "��ά����һ��Ԫ����ռ�ռ�" << sizeof(arr[0][0]) << endl;//��ά����һ��Ԫ����ռ�ռ�
	cout << "��ά������ռ�ռ�" << sizeof(arr) << endl;//��ά������ռ�ռ�
	cout << "��ά����һ����ռ�ռ�" << sizeof(arr[0]) << endl;//��ά����һ����ռ�ռ�
	cout << "��ά��������" << sizeof(arr) / sizeof(arr[0]) << endl;//��ά��������
	cout << "��ά��������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//��ά��������
	cout << "�����е�Ԫ�ظ���" << sizeof(arr) / sizeof(arr[0][0]) << endl;//��ά������ռ�ռ����һ��Ԫ����ռ�ռ�=�����е�Ԫ�ظ�����
	//���ڼ��������׵�ַ
	cout <<"�����׵�ַ" << arr << endl;
	cout <<"�����һ��Ԫ���׵�ַ" << &arr[0][0] << endl;
	cout << "��һ���׵�ַ" << arr[0] << endl;
	cout << "�ڶ����׵�ַ" << arr[1] << endl;
	system("pause");
	return 0;
}