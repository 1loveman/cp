#include<iostream>
using namespace std;

//ռλ����
int test(int a, int) {
	return a;
}
//ռλ�������Ĭ��ֵ��
int test1(int a, int =10) {
	return a;
}

int main() {
	//������ռλ����
	// ����ʱ�������λ�á�
	//����ֵ ������ ���������ͣ�
	cout << "a=" << test(20, 30) << endl;
	//ռλ������һ��Ĭ��ֵ���ɲ�������
	cout << "a=" << test1(20) << endl;
	system("pause");
	return 0;
}