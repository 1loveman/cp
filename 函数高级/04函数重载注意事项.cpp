#include<iostream>
using namespace std;

//������Ϊ��������
void test(int& a) {//�������������� �������봫��һ������,�������һ�������ᱨ��
	cout << "void test(int& a)" << endl;
}
void test(const int& a) { //�˴����Դ��볣�������������Զ�����һ����ʱ�ռ�洢������Ȼ��aָ��temp;
	cout << "void test(const int& a)" << endl;
}


void test1(int& a) {
	cout << "void test(int& a)" << endl;
}
void test1(int& a, int b = 10) {
	cout << "void test(int& a, int b = 10)" << endl;
}

int main() {
	//������Ϊ��������
	int a = 10;
	test(a);
	test(10);

	//����������������Ĭ�ϲ���
	//��Ҫ�������Ĭ�Ϻ󣬱������޷��жϾ������ĸ�������
	test1(a);//����

	system("pause");
	return 0;
}