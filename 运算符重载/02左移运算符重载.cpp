//#include<iostream>
//using namespace std;
//
//class Person {
//	friend ostream& operator<<(ostream& cout, Person& p);//为访问私有，需要将全局函数作为友元；
//private:
//	int m_Height;
//	int m_Weight;
//public:
//	Person() :m_Height(10), m_Weight(10) {
//
//	}
//};
//
//
//ostream& operator<<(ostream& cout,Person& p) {//此处形参可以不写cout 因为此处为引用 可以随意取名；
//	cout << "身高为" << p.m_Height << "体重为" << p.m_Weight << endl;
//	return cout;
//}
//
//int main() {
//	//左移运算符的重载只能通过全局函数，通过成员函数是无法实现的
//
//	Person p;
//	operator<<(cout, p)<< p;//核心 //并且此处还有链式编程思想，operator<<(cout, p)返回值为cout加上后面为 cout<<p;
//	cout << p << endl;//一般写作
//	return 0;
//}