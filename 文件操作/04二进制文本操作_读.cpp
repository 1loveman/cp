#include<iostream>
#include<fstream>
using namespace std;

class person {
public:
	
	char ch[20];
	int age;
};

void test() {
	person p;
	ifstream ifs;
	//ofstream ofs("person.txt",ios::out | ios::binary);//���Դ�����ͬʱ��
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	ifs.read((char*)&p, sizeof(p));//��������λ����  ��ʽ  .read(char* buf,int len)
	cout << "����" << p.ch << "����" << p.age << endl;


	ifs.close();


}

int main() {
	test();


	return 0;
}