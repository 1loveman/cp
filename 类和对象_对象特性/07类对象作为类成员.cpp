//#include<iostream>
//using namespace std;
//
//class phone {
//public:
//	phone(string pname):m_Pname(pname)
//	{
//		cout << "����phone���캯��" << endl;
//	}
//	~phone() {
//		cout << "����phone��������" << endl;
//	}
//
//public:
//	string m_Pname;
//};
//class Person {
//public:
//	Person(string name, string pname) :m_Name(name), m_Phone(pname)//�˴��൱��phone m_Phone = pname  //�в���ʽת��
//	{
//		cout << "����Person�Ĺ��캯��" << endl;
//	}
//	~Person() {
//		cout << "����Person����������" << endl;
//	}
//public:
//	string m_Name;
//	phone m_Phone;
//};
//
//void test() {
//	Person pe("����", "����");
//	cout << "������" << pe.m_Name << "  �ֻ��ͺţ�" << pe.m_Phone.m_Pname << endl;
//}
//
//int main() {
//	//����ʱ���ȹ����ڲ��ٹ����ⲿ
//	//�������෴
//	test();
//	
//	system("pause");
//	return 0;
//}