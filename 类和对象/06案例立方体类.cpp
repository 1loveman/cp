//#include<iostream>
//#include<string>
//using namespace std;
//
//class Cube{
//private:	
//	//��Ա����  һ�㽫��������Ϊ˽��
//	int m_L;
//	int m_W;
//	int m_H;
//public:
//	//��Ա����
//	//���ó����
//	void setL(int l) {
//		m_L = l;
//	}
//	void setW(int w) {
//		m_W = w;
//	}
//	void setH(int h) {
//		m_H = h;
//	}
//	//��ȡ�����
//	int getL() {
//		return m_L;
//	}
//	int getW() {
//		return m_W;
//	}
//	int getH() {
//		return m_H;
//	}
//	//����������
//	int Area() {
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	int Volume() {
//		return m_L * m_W * m_H;
//	}
//	//�Ƚ����
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
//	//ȫ�ֺ����Ƚ�
//	bool flag = isSame(c1, c2);
//	if (flag) {
//		cout << "����������ͬ" << endl;
//	}
//	else {
//		cout << "�������岻��ͬ" << endl;
//	}
//	bool flag2 = c1.isSame(c2);
//	if (flag2) {
//		cout << "����������ͬ" << endl;
//	}
//	else {
//		cout << "�������岻��ͬ" << endl;
//	}
//	cout << "���Ϊ" << c1.Area() << endl;
//	cout << "���Ϊ" << c1.Volume()<<endl;
//	return 0;
//}