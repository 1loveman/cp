//#include<iostream>
//#include<string>
//using namespace std;
//
//class Cube{
//private:	
//	//成员属性  一般将属性设置为私有
//	int m_L;
//	int m_W;
//	int m_H;
//public:
//	//成员函数
//	//设置长宽高
//	void setL(int l) {
//		m_L = l;
//	}
//	void setW(int w) {
//		m_W = w;
//	}
//	void setH(int h) {
//		m_H = h;
//	}
//	//获取长宽高
//	int getL() {
//		return m_L;
//	}
//	int getW() {
//		return m_W;
//	}
//	int getH() {
//		return m_H;
//	}
//	//计算面积体积
//	int Area() {
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	int Volume() {
//		return m_L * m_W * m_H;
//	}
//	//比较相等
//	bool isSame(Cube& c2) {
//		if (m_L == c2.getL() && m_W == c2.getW() && m_H == c2.getH()) {
//			return 1;
//		}
//		return 0;
//	}
//
//
//};
//
//bool isSame(Cube &c1,Cube &c2) {
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
//		return 1;
//	}
//	return 0;
//}
//
//int main() {
//	Cube c1;
//	Cube c2;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	//全局函数比较
//	bool flag = isSame(c1, c2);
//	if (flag) {
//		cout << "两立方体相同" << endl;
//	}
//	else {
//		cout << "两立方体不相同" << endl;
//	}
//	bool flag2 = c1.isSame(c2);
//	if (flag2) {
//		cout << "两立方体相同" << endl;
//	}
//	else {
//		cout << "两立方体不相同" << endl;
//	}
//	cout << "面积为" << c1.Area() << endl;
//	cout << "体积为" << c1.Volume()<<endl;
//	return 0;
//}