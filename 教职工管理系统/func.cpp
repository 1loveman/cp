#include"func.h"

func::func(){

}

func::~func() {

}

//打印菜单
void func::Menu() {
	cout << "*******************************" << endl;
	cout << "***** 0、退出当前管理系统 *****" << endl;
	cout << "***** 1、添加职工         *****" << endl;
	cout << "***** 2、显示全部员工信息 *****" << endl;
	cout << "***** 3、删除指定员工     *****" << endl;
	cout << "***** 4、修改指定员工     *****" << endl;
	cout << "***** 5、查找指定员工信息 *****" << endl;
	cout << "***** 6、排序员工         *****" << endl;
	cout << "***** 7、清空所有文档     *****" << endl;
	cout << "*******************************" << endl;
}

//退出程序
void func::Exit() {
	cout << "退出成功，欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}
