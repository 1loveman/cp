//#include<iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual void xu() = 0;//������
//};
//
//class person1:public Base {
//public:
//	void xu() {
//		cout << "����" << endl;
//	}
//	
//};
//
//class person2 :public Base {
//public:
//
//};
//
//void test() {
//	//ֻ�����ڲ����д��麯������ͳ�Ϊ�����ࡣ
//	// �����಻����ʵ��������
//	Base b;//����
//	//���麯����ʽд��
//	//virtual �������� ���������β��б�=0;
//	//�����ǳ�������ô�������������д����Ȼ��������Ҳ���Ϊ������
//	Base* abc = new person1;
//	abc->xu();
//	delete abc;
//	abc = new person2;//personΪ�����಻���д���ʵ������
//	
//	
//}
//
//
//int main() {
//	//��̬�����ĺô�
//	//��������������ά��
//	//��չ���� �޸Ĺر�
//	test();
//
//	system("pause");
//	return 0;
//}