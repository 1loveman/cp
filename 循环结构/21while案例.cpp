#include<iostream>
#include<time.h>//���������ͷ�ļ�
using namespace std;

//��������Ϸ
//ϵͳ�������һ��1~100�����������Ҳ²⣻�´���ʾ�����С��





int main() {

	//�����������ӣ�ʹ�䰴��ϵͳʱ���������������ֹÿ������һ���������
	srand((unsigned int)time(NULL));
	//ϵͳ������������
	int num=rand()%100+1,gess;

	while (1) {
		//��Ҳ²�
		cout << "������һ��1��100����:" << endl;
		cin >> gess;
		//�ж��Ƿ�¶ԡ�
		if (gess > num) {
			cout << "�´���" << endl;
		}
		else if (gess < num) {
			cout << "��С��" << endl;
		}
		else {
			cout << "��ϲ�¶���" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}