#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//联系人
struct person {
	string name;
	string sex;
	short age;
	string num;
	string ad;
};

//通讯录
struct list {
	struct person pe[MAX];
	short size;
};

//菜单
void mu(struct list* p) {
	//声明
	void add(struct list* p);
	void find(struct list* p);
	void del(struct list* p);
	void output(struct list* p);
	void ch(struct list* p);
	void delall(struct list* p);
	while (1) {
		cout << "*************************************" << endl;
		cout << "*************1添加联系人*************" << endl;
		cout << "*************2显示联系人*************" << endl;
		cout << "*************3删除联系人*************" << endl;
		cout << "*************4查找联系人*************" << endl;
		cout << "*************5修改联系人*************" << endl;
		cout << "*************6清空联系人*************" << endl;
		cout << "*************0退出通讯录*************" << endl;
		cout << "*************************************" << endl;
		cout << "请选择：" << endl;
		short c = 0;
		//循环保证输入的值为0~9
		do {
			cin >> c;
			if (c < 0 || c>6) {
				cout << "输入有误！,请重新输入！" << endl;
			}
		} while (c < 0 || c>6);
		//选择不同功能;
		switch (c) {
		case 1: add(p);
			break;
		case 2: output(p);
			break;
		case 3: del(p);
			break;
		case 4: find(p);
			break;
		case 5: ch(p);
			break;
		case 6: delall(p);
			break;
		default:;
			break;
		}
		//选择0退出通讯录
		if (!c) {
			break;
		}
	}
}

//添加联系人
void add(struct list* p) {
	if (p->size < 1000) {
		cout << "请输入姓名：" << endl;
		cin >> p->pe[p->size].name;
		cout << "请输入性别：" << endl;
		cin >> p->pe[p->size].sex;
		cout << "请输入年龄：" << endl;
		cin >> p->pe[p->size].age;
		cout << "请输入号码：" << endl;
		cin >> p->pe[p->size].num;
		cout << "请输入住址：" << endl;
		cin >> p->pe[p->size].ad;
		cout << "添加成功！" << endl;
		(p->size)++;
	}
	else {
		cout << "通讯录已满！" << endl;
	}
}

//显示联系人
void output(struct list* p) {
	int i = 0;
	if (i == p->size) {
		cout << "通讯录为空！" << endl;
	}
	else {
		for (i = 1; i < p->size + 1; i++) {
			cout << "姓名：" << p->pe[i - 1].name
				<< " 性别：" << p->pe[i - 1].sex
				<< " 年龄：" << p->pe[i - 1].age
				<< " 号码：" << p->pe[i - 1].num
				<< " 住址：" << p->pe[i - 1].ad << endl;
		}
	}
	
}

//删除联系人
void del(struct list* p) {
	cout << "请输入要删除联系人的姓名：" << endl;
	int siz=p->size;
	string temp;
	cin >> temp;
	for (int i = 1; i < p->size+1; i++) {
		if (temp == (p->pe[i-1].name)) {
			while (i - 1 < p->size) {
				p->pe[i - 1] = p->pe[i];
				i++;
			}
			cout << "删除成功" << endl;
			p->size--;
			break;
		}
	}
	if (p->size == siz) {
		cout << "删除失败" << endl;
	}
}

//查找联系人
void find(struct list* p) {
	string temp;
	int i;
	cout << "请输入要查找联系人的姓名" << endl;
	cin >> temp;
	for (i = 1; i < (p->size) + 1; i++) {
		if (temp == p->pe[i - 1].name) {
			cout << "查找成功" << endl;
			cout << "姓名：" << p->pe[i - 1].name << endl;
			cout << "性别：" << p->pe[i - 1].sex << endl;
			cout << "年龄：" << p->pe[i - 1].age << endl;
			cout << "号码：" << p->pe[i - 1].num << endl;
			cout << "地址：" << p->pe[i - 1].ad << endl;
			break;
		}
	}
	if (i == (p->size) + 1) {
		cout << "查无此人" << endl;
	}
}

//修改联系人
void ch(struct list* p) {
	cout << "请输入需要修改的联系人" << endl;
	string temp;
	cin >> temp;
	int i;
	for (i = 1; i < p->size + 1; i++) {
		if (temp == p->pe[i - 1].name) {
			cout << "请输入姓名" << endl;
			cin >> p->pe[i - 1].name;
			cout << "请输入性别" << endl;
			cin >> p->pe[i - 1].sex;
			cout << "请输入年龄" << endl;
			cin >> p->pe[i - 1].age;
			cout << "请输入号码" << endl;
			cin >> p->pe[i - 1].num;
			cout << "请输入地址" << endl;
			cin >> p->pe[i - 1].ad;
			break;
		}
	}
	if (i == p->size + 1) {
		cout << "未找到该联系人" << endl;
	}
	else {
		cout << "修改成功！" << endl;
	}
}

//清空通讯录
void delall(struct list* p) {
	p->size = 0;
}

int main() {
	//通讯录管理系统
	//常用功能
	//创建项目
	//添加联系人
	//删除联系人
	//查找联系人
	//修改联系人
	//清空通讯录
	//退出


	//创建结构体
	struct list l;
	//初始化
	l.size = 0;
	//菜单调用
	mu(&l);
	system("pause");
	return 0;
}