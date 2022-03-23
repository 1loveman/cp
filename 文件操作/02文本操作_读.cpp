#include<iostream>
#include<fstream>//添加头文件fstream
#include<string>

using namespace std;

//写文件的五个步骤
//1添加头文件fstream


// 创建文件流
//格式 文件流操作 文件流对象名;

//打开文件并判断是否成功
//格式 文件流对象名.open("路径加文件名",打开方式);
判断是否打开成功

//读数据四种方案



//关闭文件
//文件流对象名.close();
//


void test() {
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	//读数据
	//方案一
	char buf[1024] = { 0 };
	while ((ifs >> buf)) {
		cout << buf << endl;
	}
	ifs.close();


	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	//读数据
	//方案二

	while (ifs.getline(buf,sizeof(buf))) {
		cout << buf << endl;
	}
	ifs.close();

	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	//读数据
	//方案三
	string str;
	while (getline(ifs,str)) {
		cout << str << endl;
	}
	ifs.close();


	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	//读数据
	//方案四
	char c;
	while ((c=ifs.get())!=EOF) {
		cout << c ;//此处不可用<<endl;
	}
	ifs.close();

}

int main() {
	
	test();

	return 0;
}