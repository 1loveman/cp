#include<iostream>
#include<fstream>
using namespace std;

class person {
public:
	char ch[20];
	int age;
};

void test() {
	person p = {"����",10};
	ofstream ofs;
	//ofstream ofs("person.txt",ios::out | ios::binary);//���Դ�����ͬʱ��
	ofs.open("person.txt", ios::out | ios::binary);

	ofs.write((const char*)&p, sizeof(p));

	ofs.close();


}

int main() {
	test();


	return 0;
}