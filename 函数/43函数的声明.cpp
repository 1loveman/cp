#include<iostream>
using namespace std;


int main() {
	//����������
	// �������Զ�ε��Ƕ���ֻ��һ�Σ�
	//�������Ķ������main����֮����ʹ�ú���֮ǰ����Ҫ����������;��Ȼ�ᱨ��
	//��ʽ  ����ֵ���� ���������������� �βΣ�;
	void swap(int num1, int mum2);
	int a = 10;
	int b = 20;
	swap(a, b);//�����ĵ���
	cout << "������" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}



//������������λ��
void swap(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

