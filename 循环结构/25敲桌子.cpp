#include<iostream>
using namespace std;

int main() {

	//������
	//��1����100��������ָ�λ����ʮλ��7���߸�����7�ı�������ӡ�����ӣ�����ֱ�Ӵ�ӡ����

	//ѭ��1��100
	for(int num=1;num<=100;num++){
		int n1, n2, n3;
		//ȡ��λ��ֵ��7�ж�
		n1 = (num % 10);  
		//ȡʮλ��ֵ��7�ж�
		n2 = num/10;
		// �Ƿ�7�ı���
		n3 = num % 7;
		//�ж��Ƿ����
		if (n1==7||n2==7||!n3) {
			cout << "������" << endl;
		}
		else {
			cout << num << endl;
		}
	}


	system("pause");
	return 0;
}