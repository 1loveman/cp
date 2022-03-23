#include<iostream>
#include<fstream>//添加头文件fstream

using namespace std;

//写文件的五个步骤
//1添加头文件fstream


// 创建文件流
//格式 文件流操作 文件流对象名;

//打开文件
//格式 文件流对象名.open("路径加文件名",打开方式);

//写入数据
//文件流对象名<<"文本内容"<<endl;//<<endl可换行

//关闭文件
//文件流对象名.close();
//


void test() {
	fstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "明天你好" << endl;
	ofs.close();
}

int main() {
	//文件操作---需要包含文件流 即fstream
	//文件分为文本文件和二进制文件，其中文本文件是通过ascall码存储，
	//文件流操作
	//ofstream 写
	//ifstream 读
	//fstream 可读可写

	//文件打开方式
	// ios::out以写的方式打开
	// ios::in 以读的方式打开
	// ios::ate打开文件末尾
	// ios::app追加方式打开
	// ios::trunc若有同名先删再创建
	// ios::binary 二进制文件
	//可以通过|将多种方式联系起来。
	test();

	return 0;
}