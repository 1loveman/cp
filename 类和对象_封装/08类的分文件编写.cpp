//#include<iostream>
//using namespace std;
//#include"08Point.h"
//#include"08Circle.h"
//
//
//
//void isInCircle(Point p, Circle c) {
//	//��㵽Բ�ľ����ƽ��
//	int distance = (c.getCenter().getH() - p.getH()) * (c.getCenter().getH() - p.getH()) + 
//		(c.getCenter().getL() - p.getL()) * (c.getCenter().getL() - p.getL());
//	//��뾶��ƽ��
//	int rDistence = c.getR() * c.getR();
//	//�ж�
//	if (distance == rDistence) {
//		cout << "����Բ��" << endl;
//	}
//	else if (distance < rDistence) {
//		cout << "����Բ��" << endl;
//
//	}
//	else {
//		cout << "����Բ��" << endl;
//	}
//
//}
////�������ܹ�����������
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
////������ķ��ļ���д
////ͷ�ļ��е�һ��#program once��ֹ�ض���
////���ඨ��ȫ������ճ��
////ɾ����Ա�����ڲ������ݣ����ɶ�Ӧ������
////Դ�ļ���#include"ͷ�ļ�.h"
////����Ա����ȫ��ճ�������棻���ں�����ǰ������::�޶�������