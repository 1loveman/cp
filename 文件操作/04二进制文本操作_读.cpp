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
	//ofstream ofs("person.txt",ios::out | ios::binary);//可以创建的同时打开
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	ifs.read((char*)&p, sizeof(p));//读二进制位函数  格式  .read(char* buf,int len)
	cout << "姓名" << p.ch << "年龄" << p.age << endl;


	ifs.close();


}

int main() {
	test();


	return 0;
}