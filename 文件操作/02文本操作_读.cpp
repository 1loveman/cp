#include<iostream>
#include<fstream>//���ͷ�ļ�fstream
#include<string>

using namespace std;

//д�ļ����������
//1���ͷ�ļ�fstream


// �����ļ���
//��ʽ �ļ������� �ļ���������;

//���ļ����ж��Ƿ�ɹ�
//��ʽ �ļ���������.open("·�����ļ���",�򿪷�ʽ);
�ж��Ƿ�򿪳ɹ�

//���������ַ���



//�ر��ļ�
//�ļ���������.close();
//


void test() {
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//������
	//����һ
	char buf[1024] = { 0 };
	while ((ifs >> buf)) {
		cout << buf << endl;
	}
	ifs.close();


	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//������
	//������

	while (ifs.getline(buf,sizeof(buf))) {
		cout << buf << endl;
	}
	ifs.close();

	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//������
	//������
	string str;
	while (getline(ifs,str)) {
		cout << str << endl;
	}
	ifs.close();


	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//������
	//������
	char c;
	while ((c=ifs.get())!=EOF) {
		cout << c ;//�˴�������<<endl;
	}
	ifs.close();

}

int main() {
	
	test();

	return 0;
}