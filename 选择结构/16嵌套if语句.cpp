#include<iostream>
using namespace std;


int main() {
	//Ƕ��if���
	//��ʽif�����ټӸ�if 
	
	int score;
	//��ʾ�û��������
	cout << "�����뿼�ķ�����" << endl;
	cin >> score;
	if (score >= 600) {
		cout << "��ϲ�㿼����һ����" << endl;
		if (score > 650) {
			cout << "��ϲ�������廪" << endl;
		}else{
			cout << "��ϲ���ϱ���" << endl;
		}
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