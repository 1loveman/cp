#include<iostream>
using namespace std;

int main() {
	//���������
	// ���������----- + - * / % ++  --
	int num1,num2;
	cout << "��ֱ�����������" << endl;
	cin >> num1 >> num2;
	//��+
	cout << num1 + num2<<endl;
	//��-
	cout << num1 - num2 << endl;
	//��*
	cout << num1 * num2 << endl;
	//��/
	cout << num1 / num2 << endl;//����������Ϊ��;������������������������
	//��ģ��ȡ�ࣩ%
	cout << num1 % num2 << endl;//ֻ������ͣ�����num2����Ϊ�㣻
	//��������++
	cout << num1 <<endl<< num1++ << endl;   //����++���ᵼ�±�����һ��
	cout << num1 << endl << ++num1 << endl;//���Ǳ��ʽ��ֵ������ i++ ��ǰȡֵ ++i�Ӻ�ȡֵ��
	//�Լ�����--
	cout << num2 << endl << num2++ << endl;//����--���ᵼ�±�����һ��
	cout << num2 << endl << ++num2 << endl;//���Ǳ��ʽ��ֵ������ i-- ��ǰȡֵ --i����ȡֵ��
	system("pause");
	return 0;
}