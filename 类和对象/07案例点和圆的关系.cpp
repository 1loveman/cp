//#include<iostream>
//using namespace std;
//
//
//
//class Point {
//private:
//	//成员属性  横纵坐标
//	int m_H;
//	int m_L;
//public:
//	//成员函数
//	//设置
//	void setH(int p_h) {
//		m_H = p_h;
//	}
//	void setL(int p_l) {
//		m_L = p_l;
//	}
//	//获取
//	int getH() {
//		return m_H;
//	}
//	int getL() {
//		return m_L;
//	}
//};
//class Circle {
//private:
//	//成员属性 圆心 半径
//	Point m_Center;
//	int m_R;
//public:
//	//成员函数
//	//设置
//	void setCenter(Point c) {
//		m_Center = c;
//	}
//	void setR(int c_r) {
//		m_R = c_r;
//	}
//	//获取
//	Point getCenter() {
//		return m_Center;
//	}
//	
//	int getR() {
//		return m_R;
//	}
//
//
//};
//void isInCircle(Point p, Circle c) {
//	//求点到圆心距离的平方
//	int distance = (c.getCenter().getH() - p.getH()) * (c.getCenter().getH() - p.getH()) + 
//		(c.getCenter().getL() - p.getL()) * (c.getCenter().getL() - p.getL());
//	//求半径的平方
//	int rDistence = c.getR() * c.getR();
//	//判断
//	if (distance == rDistence) {
//		cout << "点在圆上" << endl;
//	}
//	else if (distance < rDistence) {
//		cout << "点在圆内" << endl;
//
//	}
//	else {
//		cout << "点在圆外" << endl;
//	}
//
//}
////类里面能够创建其他类
//int main() {
//	Circle c;
//	Point center;
//	center.setH(0);
//	center.setL(0);
//	c.setCenter(center);
//	c.setR(10);
//	Point p;
//	p.setH(10);
//	p.setL(10);
//	isInCircle(p, c);
//	system("pause");
//	return 0;
//}