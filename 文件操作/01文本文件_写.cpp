#include<iostream>
#include<fstream>//���ͷ�ļ�fstream

using namespace std;

//д�ļ����������
//1���ͷ�ļ�fstream


// �����ļ���
//��ʽ �ļ������� �ļ���������;

//���ļ�
//��ʽ �ļ���������.open("·�����ļ���",�򿪷�ʽ);

//д������
//�ļ���������<<"�ı�����"<<endl;//<<endl�ɻ���

//�ر��ļ�
//�ļ���������.close();
//


void test() {
	fstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "�������" << endl;
	ofs.close();
}

int main() {
	//�ļ�����---��Ҫ�����ļ��� ��fstream
	//�ļ���Ϊ�ı��ļ��Ͷ������ļ��������ı��ļ���ͨ��ascall��洢��
	//�ļ�������
	//ofstream д
	//ifstream ��
	//fstream �ɶ���д

	//�ļ��򿪷�ʽ
	// ios::out��д�ķ�ʽ��
	// ios::in �Զ��ķ�ʽ��
	// ios::ate���ļ�ĩβ
	// ios::app׷�ӷ�ʽ��
	// ios::trunc����ͬ����ɾ�ٴ���
	// ios::binary �������ļ�
	//����ͨ��|�����ַ�ʽ��ϵ������
	test();

	return 0;
}