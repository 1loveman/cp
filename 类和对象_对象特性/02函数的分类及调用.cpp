//#include<iostream>
//using namespace std;
//
//class person {
//public:
//	//���캯����Ϊ�вκ��������޲κ���
//	//������ͨ�����Ϳ�������
//
//
//	//�˴�д��ô��Ĺ��캯����Ϊ���������ء�
//	//�޲κ���
//	person() {
//		cout << "this is �޲κ���" << endl;
//	}
//	//�вκ���
//	person(int a) {
//		cout << "this is �вκ���" << endl;
//	}
//	//��������
//	person(const person& p) {//�����������ɶ���
//		cout << "this is person" << endl;
//	}
//	
//	~person() {
//		cout << "this is ~person" << endl;
//	}
//
//};
//
//
//int main() {
//	//�����ĵ��÷���
//
//	//����
//	//�����ܵ���ʹ�ù��캯��������ͨ����������á�
//	person p1;//�˴����õ����޲ι��캯��������p1���()������������Ϊperson p1();�Ǻ���������
//	person p2(10);//�˴����õ����вκ���
//	person p3(p2);//�������á�
//	//��ʽ
//	person p_3;//�޲�
//	person p_1 = person(10);//�в�  //����person��10��;��Ϊ��������,�����н���ϵͳ�������� ��
//	person p_2 = person(p2);//����
//	
//	person() = person(p1);//�˴�Ҳ��������˴����������� ����������������
//	person(p1);//��Ҫ���ÿ�������������ʼ���������󣻱���������Ϊperson(p3) == person p3; �����ض�����
//	//��ʽ
//	person p__1;
//	person p__2 = 10;
//	person p__3 = p1;
//
//
//	return 0;
//}