#include<iostream>
using namespace std;

int main() {
	//�ַ���
	char ch = 'a';//����ʹ��˫���Ų��ҽ���дһ���ַ���
	cout << "�ַ�����ռ�ֽ�Ϊ��" << sizeof(char) << endl;//ֻռ��һ���ֽ��ڴ棬�����ڴ�����ascll��ķ�ʽ�洢��
	cout << "����a��Ӧ��ascll��Ϊ" << (int)ch<< endl;
	//������ĸascll��
	//a--97  a--65
	system("pause");
	return 0;
}