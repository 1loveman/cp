#include<iostream>
using namespace std;

int main() {
	//��ָ������ָ��ĳ�ʼ��
	int* p = NULL;
	//��ָ���ǲ����Է��ʵ�
	*p = 100;	//0-255֮����ڴ���Ϊϵͳռ���ڴ棬�û���������ʣ�


	//Ұָ��
	//��ָ�����ֱ�Ӹ����ַ���ǷǷ�����
	p = (int*)0x1111;
	system("pause");
	return 0;
}