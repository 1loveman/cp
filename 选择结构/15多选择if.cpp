#include<iostream>
using namespace std;


int main() {
	//��ѡ��if���
	//��ʽ 
	/*if(����1){
		����1Ϊ��ִ�е����
	}
	else if(����2){
		����һΪ��������Ϊ��ִ�е����
	}
	else{
		��������ʱִ��
	}
	*/
	int score;
	cout << "�����뿼�ķ�����" << endl;
	cin >> score;
	if (score >= 600) {
		cout << "��ϲ�㿼����һ����" << endl;
	}
	else if (score >= 500) {
		cout << "��ϲ�㿼���˶�����ѧ��" << endl;
	}
	else {
		cout << "��ϲ�㿼����������ѧ��" << endl;
	}
	
	system("pause");
	return 0;
}