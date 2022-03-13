#include<iostream>
#define MAX 1000
using namespace std;

//创建联系人结构体
struct pe {
	string name;
	string sex;
	short age;
	string num;
	string ad;
};

//创建通讯录结构体
struct list {
	struct pe stu[MAX];
	short size;
};

//菜单
void mu() {
	cout << "*******************" << endl;
	cout << "****1添加联系人****" << endl;
	cout << "****2显示联系人****" << endl;
	cout << "****3删除联系人****" << endl;
	cout << "****4查找联系人****" << endl;
	cout << "****5修改联系人****" << endl;
	cout << "****6清空联系人****" << endl;
	cout << "****0退出通讯录****" << endl;
	cout << "*******************" << endl;
}

//找到对应联系人返回下标
short fi(struct list* l, string name) {
	for (short i = 0; i < l->size; i++) {
		if (l->stu[i].name == name) {
			return i;
		}
	}
	return -1;;
}


//添加联系人
void add(struct list* l) {
	short fi(struct list* l,string name);
	if (l->size < MAX) {
		string name;
		cout << "请输入需要添加联系人姓名" << endl;
		cin >> name;
		if (fi(l,name)==-1) {
			l->stu[l->size].name = name;
			cout << "请输入需要添加联系人性别" << endl;
			cin >> l->stu[l->size].sex;
			cout << "请输入需要添加联系人年龄" << endl;
			cin >> l->stu[l->size].age;
			cout << "请输入需要添加联系人号码" << endl;
			cin >> l->stu[l->size].num;
			cout << "请输入需要添加联系人地址" << endl;
			cin >> l->stu[l->size].ad;
			l->size++;
		}
		else {
			cout << "已存在该联系人" << endl;
		}
		
	}
	else {
		cout << "通讯录已满" << endl;
	}
	system("pause");
	system("cls");

}

//显示联系人
void show(struct list* l) {
	if (0 == l->size) {
		cout << "通讯录为空！" << endl;
	}
	else {
		for (int i = 0; i < l->size; i++) {
			cout << " 姓名：" << l->stu[i].name
				<< " 性别：" << l->stu[i].sex
				<< " 年龄：" << l->stu[i].age
				<< " 号码：" << l->stu[i].num
				<< " 地址：" << l->stu[i].ad << endl;
		}
	}
	system("pause");
	system("cls");
}

//删除联系人
void del(struct list* l) {
	short fi(struct list* l, string name);
	cout << "请输入删除联系人姓名" << endl;
	string name;
	cin >> name;
	short ret = fi(l, name);
	if (ret == -1) {
		cout << "查无此人" << endl;
	}
	else {
		for (int i = ret; i < l->size; i++) {
			l->stu[i] = l->stu[i + 1];
			l->size--;
		}
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");

}

//查找联系人
void find(struct list* l) {
	short fi(struct list* l, string name);
	cout << "请输入查找姓名" << endl;
	string name;
	cin >> name;
	int ret = fi(l, name);
	if (ret == -1) {
		cout << "未找到该联系人" << endl;
	}
	else {
		cout << "查找成功" << endl;
		cout << " 姓名：" << l->stu[ret].name
			<< " 性别：" << l->stu[ret].sex
			<< " 年龄：" << l->stu[ret].age
			<< " 号码：" << l->stu[ret].num
			<< " 地址：" << l->stu[ret].ad << endl;
	}
	system("pause");
	system("cls");
}

//修改联系人
void change(struct list* l) {
	short fi(struct list* l, string name);
	cout << "请输入需要修改联系人姓名" << endl;
	string name;
	cin >> name;
	int ret = fi(l, name);
	if (ret == -1) {
		cout << "未找到该联系人" << endl;
	}
	else {
		cout << "请输入修改后联系人姓名" << endl;
		cin >> l->stu[ret].name;
		cout << "请输入修改后联系人性别" << endl;
		cin >> l->stu[ret].sex;
		cout << "请输入修改后联系人年龄" << endl;
		cin >> l->stu[ret].age;
		cout << "请输入修改后联系人号码" << endl;
		cin >> l->stu[ret].num;
		cout << "请输入修改后联系人地址" << endl;
		cin >> l->stu[ret].ad;
		cout << "修改成功" << endl;
		
	}
	system("pause");
	system("cls");
}
//清空联系人
void free(struct list* l) {
	l->size = 0;
	cout << "清空成功！" << endl;
	system("pause");
	system("cls");
}

int main() {
	//创建项目

	//创建结构体
	struct list l;
	//初始化
	l.size = 0;

	while (1) {
		short che = 0;
		mu();
		do {
			cout << "请选择：" << endl;
			cin >> che;
			if (che < 0 || che>6) {
				cout << "输入有误请重新输入" << endl;
				system("pause");
				system("cls");
				mu();
			}
		} while (che < 0 || che>6);
		switch (che) {
		case 1: add(&l);
			break;
		case 2: show(&l);
			break;
		case 3:del(&l);
			break;
		case 4:find(&l);
			break;
		case 5: change(&l);
			break;
		case 6:free(&l);
			break;
		default:;
			break;
		}
		//退出通讯录
		if (0 == che) {
			cout << "退出通讯录" << endl;
			break;
		}
	}

	//菜单


	//添加联系人

	//显示联系人

	//删除联系人

	//查找联系人

	//修改联系人

	//清空联系人

	//退出通讯录

	system("pause");
	return 0;
}