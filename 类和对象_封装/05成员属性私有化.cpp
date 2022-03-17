//#include<iostream>
//#include<string>
//using namespace std;
//
//class person {
//private:
//	//姓名  可读可写
//	string m_Name;
//	//年龄  只读
//	int m_Age;
//	//情人  只写
//	string m_Lover;
//public:
//	//设置成员属性
//	void setName(string name) {//设置姓名为可写
//		m_Name = name;//判断有效性即为在函数里面添加判断
//	}
//	void setLover(string lover) {//设置情人为可写
//		m_Lover = lover;
//	}
//	//获取成员属性
//	string getName() {//设置姓名为可读
//		return m_Name;
//	}
//	int getAge() {//设置年龄为可读;
//		m_Age = 18;
//		return m_Age;
//	}
//	
//
//};
//
//
//int main() {
//	//成员属性私有化
//	//意义：可以控制权限的读写,可以检测数据的有效性
//	person pe;
//	pe.setName("张三");
//	pe.setAge(18);
//	pe.setLover("苍井");
//	cout<<pe.getName();
//	return 0;
//}