#include<iostream>
using namespace std;

// switchѡ��ṹ
//��ʽ
/*
	switch(���ʽ)
	{
		case ���1:���ʽ1;break;//���ֻ�������ͻ����ַ��ͣ����������䣬
		case ���2:���ʽ2;break;
		case ���3:���ʽ3;break;
		case ���4:���ʽ4;break;
		default:���ʽ4;break;
	}

*/



int main() {
	//��Ӱ���
	int score;
	cout << "���������Ϊ��Ӱ���0~9��" << endl;
	cin >> score;
	switch (score)
	{
		case 9 :cout << "����" << endl;
		break;
		case 8 :cout << "����" << endl;
			break;
		case 7 :cout << "��Ƭ" << endl;
			break;
		case 6 :cout << "��Ƭ" << endl;
			break;
		case 5 :cout << "��Ƭ" << endl;
			break;
		case 4 :cout << "��Ƭ" << endl;
			break;
		case 3 :cout << "��Ƭ" << endl;
			break;
		case 2 :cout << "��Ƭ" << endl;
			break;
		case 1 :cout << "��Ƭ" << endl;
			break;
		default:cout << "����" << endl;
			break;
	}
	system("pause");
	return 0;
}