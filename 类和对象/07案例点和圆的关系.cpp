//#include<iostream>
//using namespace std;
//
//
//
//class Point {
//private:
//	//��Ա����  ��������
//	int m_H;
//	int m_L;
//public:
//	//��Ա����
//	//����
//	void setH(int p_h) {
//		m_H = p_h;
//	}
//	void setL(int p_l) {
//		m_L = p_l;
//	}
//	//��ȡ
//	int getH() {
//		return m_H;
//	}
//	int getL() {
//		return m_L;
//	}
//};
//class Circle {
//private:
//	//��Ա���� Բ�� �뾶
//	Point m_Center;
//	int m_R;
//public:
//	//��Ա����
//	//����
//	void setCenter(Point c) {
//		m_Center = c;
//	}
//	void setR(int c_r) {
//		m_R = c_r;
//	}
//	//��ȡ
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