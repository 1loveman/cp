#include<iostream>
using namespace std;

int* test() {
	int* p = new int(10);
	return p;
}

void test1() {
	int* arr = new int[10];//����һ����ʮ������Ԫ�ص����飬�����׵�ַ��ֵ��ָ��arr;
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	//delete [] arr; �ͷ�����
}
int main() {
	//�����ɳ���Ա���ٺ��ͷţ����߳���������Զ��ͷ�;
	// ����new�����ݿ��ٵ�����
	//��ʽ ��������* ָ����= new ��������(��ʼֵ);//new���ؿ��ٵ��ڴ��ַ
	//������  new ��������[���鳤��]
	//����delete�ͷ�
	//��ʽdelete ������;
	//�ͷ����� delete [] ������;
	int* p = test();
	//delete p;�ͷź���ʹ������ڴ�ᱨ��;
	cout << *p << endl;
	cout << *p << endl;
	test1();
	system("pause");
	return 0;
}



