//#include<iostream>
//using namespace std;
//#include"08Point.h"
//#include"08Circle.h"
//
//
//
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
//
//
////关于类的分文件编写
////头文件中第一行#program once防止重定义
////将类定义全部复制粘贴
////删掉成员函数内部的内容，换成对应声明；
////源文件中#include"头文件.h"
////将成员函数全部粘贴在里面；并在函数名前加类名::限定作用域