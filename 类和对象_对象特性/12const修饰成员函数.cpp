//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	void ShowPersonHeight() {
//		cout << "�������" << endl;
//	}
//
//	void ShowPersonAge()const //������
//	{
//		m_Age = 100;//�˴��������޸�
//		m_Height = 100;//��mutable���εĳ�Ա���Կ����޸�
//
//	}
//	int m_Age = 10;
//	mutable int m_Height
//};
//
//void test() {
//	const Person p;//������
//	p.m_Height = 100;
//	p.m_Age = 100;//���������Ա���Բ����޸ģ�mutable���εĳ���
//	p.ShowPersonHeight();//������ֻ�ܷ��ʳ�����
//	
//}
//
//int main() {
//	//������
//	//��const���εĳ�Ա������Ϊ������ constд�ں����βΣ���֮����()const
//	//�����������޸ĳ�Ա����
//	//��mutable������������ͳ�Ա���Կ��Ը���
//
//	//������
//	//������ֻ���Ե��ó�����
//	//��������ֻ��mutable���εĳ�Ա���Կ��Ը���;
//	test();
//
//	system("pause");
//	return 0;
//}