#include<iostream>
#include<string>
using namespace std;

struct hero {
	string name;
	int age = 0;
	string sex;
};
void putin(struct hero* p, int len) {
	struct hero* temp = p;
	for (int i = 0; i < len; i++) {
		cout << "请输入姓名：" << endl;
		cin >> p->name;
		cout << "请输入年龄：" << endl;
		cin >> p->age;
		cout << "请输入性别" << endl;
		cin >> p->sex;
		system("cls");
		p++;
	}
	p = temp;
}

void putout(struct hero* p, int len) {
	struct hero* temp = p;
	for (int i = 0; i < len; i++) {
		cout << " 姓名：" << endl;
		cout << p->name<< endl;
		cout << " 年龄：" << endl;
		cout << p->age << endl;
		cout << " 性别:" << endl;
		cout << p->sex << endl;
		p++;
	}
	p = temp;
}

//冒泡排序
void MPPX(struct hero* p, int len) {//利用指针减小内存消耗;
	struct hero* temp1 = p;
	struct hero* temp2 = p+1;
	for (int i = 0; i < len - 1; i++) {
		p = temp1;
		temp2 = p + 1;
		for (int j = 0; j < len - 1 - i; j++) {
			if ((p->age) > (temp2->age)) {
				(p->name) = (temp2->name);
				(p->age) = (temp2->age);
				(p->sex) = (temp2->sex);
				p++;
				temp2++;
			}
		}
			
	}
	p = temp1;
}


int main() {

	struct hero he[5];
	int len = sizeof(he) / sizeof(he[0]);
	struct hero* p = he;
	//输入
	putin(p, len);
	//冒泡排序

	//输出
	putout(p, len);
	system("pause");
	return 0;
}