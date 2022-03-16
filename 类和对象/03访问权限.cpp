//#include<iostream>
//#include<string>
//using namespace std;
//
//class person {
//public:
//	string m_name;
//protected:
//	string m_car;
//private:
//	int m_password;
//public:
//	void func() {
//		m_name = "张三";
//		m_car = "红旗";
//		m_password = 1;
//	}
//};
//
//int main() {
//
//	//访问权限
//	// 公共权限 public   类内类外都可以访问。
//	// 保护权限  protected 类内可以访问 类外不可访问   儿子可以访问父亲
//	// 私有权限  private  类内可以访问 类外不可以访问
//	person pe;
//	pe.m_name = "李四";
//	pe.m_car = "拖拉机";//访问报错权限补足
//	pe.m_password = 2;//访问报错权限不足
//
//
//	system("pause");
//	return 0;
//}