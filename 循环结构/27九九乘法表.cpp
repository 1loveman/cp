#include<iostream>
using namespace std;

int main() {

	//��ӡ�žų˷���


	//�ֱ��ӡ����
	for (int i = 1; i < 10; i++) {
		//��ӡÿ�е�����
		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << i * j<<"\t";  //ÿ�в��ϴ�ӡ��*��;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}