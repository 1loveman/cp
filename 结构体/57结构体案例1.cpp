#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	int score =0;
};



struct teacher {
	string name;
	struct student stu[5];
};
//输入函数
void putin(struct teacher* p, int len) {
	struct teacher* temp=p;
	for (int i = 0; i < len; i++) {
		cout << "请输入老师姓名" << endl;
		cin >> p->name;
		system("cls");
		for (int j = 0; j < 5; j++) {
			cout << "请输入老师所带的学生姓名 " << endl;
			cin >> p->stu[i].name;
			cout << "请输入老师所带的学生分数 " << endl;
			cin >> p->stu[i].score;
			system("cls");
		}
		p++;
	}
	p = temp;//指针重新指向结构体首
}

void putout(struct teacher* p,int len) {
	struct teacher* temp = p;
	for (int i = 0; i < len; i++) {
		cout << "老师姓名:" << endl;
		cout << p->name<<endl;
		for (int j = 0; j < 5; j++) {
			cout << "老师所带的学生姓名: " << endl;
			cout << p->stu[i].name<<endl;
			cout << "老师所带的学生分数: " << endl;
			cout << p->stu[i].score<<endl;
		}
		p++;
	}
	p = temp;//指针重新指向结构体首
}

int main() {
	//三名老师各带五名学生，老师有老师姓名和学生;学生有姓名和分数
	struct teacher t[3];
	struct teacher* p = t;
	int len = sizeof(t) / sizeof(t[0]);
	putin(p,len);
	putout(p, len);
	system("pause");
	return 0;
}