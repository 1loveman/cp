#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	short age = 0;
	int score = 0;
};
//ֵ������Ҫ�ѽṹ��ȫ�������ڴ����Ĺ���;
void test_z(struct student stu) {//ֵ����
	cout << " ѧ�������� " << stu.name << " ѧ�����䣺 " << stu.age << " ѧ���ɼ��� " << stu.score << endl;
}
//ָ�봫��ֻ�����ַ ��ʡ�ڴ�
void test_p(const struct student* p) {//ֵ����
	//p->age = 10;//�˴����Ļᵼ��ʵ�θı䣬������Ҫconst�����ǵ�ֵ���ɸģ�
	cout << " ѧ�������� " << p->name << " ѧ�����䣺 " << p->age << " ѧ���ɼ��� " << p->score << endl;
}


int main() {
	struct student stu;
	stu.name = "����";
	stu.age = 20;
	stu.score = 80;
	struct student* p = &stu;
	//���ú������ַ�ʽ
	// ͨ�����ú�������ṹ�����ݣ� 
	//ֵ����
	test_z(stu);
	//��ַ����
	test_p(p);
	system("pause");
	return 0;
}