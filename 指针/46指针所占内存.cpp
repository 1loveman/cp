#include<iostream>
using namespace std;

int main() {
	//ָ����ռ�õ��ڴ�ռ�
	//32λ����ϵͳ���ĸ��ֽڣ�64λ����ϵͳ�ǰ˸��ֽڡ�
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	system("pause");
	return 0;
}