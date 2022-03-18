//#include<iostream>
//using namespace std;
//
//class phone {
//public:
//	phone(string pname):m_Pname(pname)
//	{
//		cout << "这是phone构造函数" << endl;
//	}
//	~phone() {
//		cout << "这是phone析构函数" << endl;
//	}
//
//public:
//	string m_Pname;
//};
//class Person {
//public:
//	Person(string name, string pname) :m_Name(name), m_Phone(pname)//此处相当于phone m_Phone = pname  //有参隐式转换
//	{
//		cout << "这是Person的构造函数" << endl;
//	}
//	~Person() {
//		cout << "这是Person的析构函数" << endl;
//	}
//public:
//	string m_Name;
//	phone m_Phone;
//};
//
//void test() {
//	Person pe("张三", "三星");
//	cout << "姓名：" << pe.m_Name << "  手机型号：" << pe.m_Phone.m_Pname << endl;
//}
//
//int main() {
//	//构造时，先构造内部再构造外部
//	//析构则相反
//	test();
//	
//	system("pause");
//	return 0;
//}