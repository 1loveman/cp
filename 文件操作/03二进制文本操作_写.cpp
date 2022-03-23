#include<iostream>
#include<fstream>
using namespace std;

class person {
public:
	char ch[20];
	int age;
};

void test() {
	person p = {"张三",10};
	ofstream ofs;
	//ofstream ofs("person.txt",ios::out | ios::binary);//可以创建的同时打开
	ofs.open("person.txt", ios::out | ios::binary);

	ofs.write((const char*)&p, sizeof(p));

	ofs.close();


}

int main() {
	test();


	return 0;
}