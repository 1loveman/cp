#include"Boss.h"

//����
Boss::Boss(int id, string name, int deptid) {
	m_Id = id;
	m_Name = name;
	m_DeptId = deptid;
}
//��ʾ��Ϣ
void Boss::Showinfo() {
	cout << "Ա����ţ�" << m_Id
		<< "\tԱ��������" << m_Name
		<< "\t��λ��" << GetDeptName()
		<< "\t��λְ��ָ������" << endl;

}

//��ȡ��λ����
string Boss::GetDeptName() {
	return string("�ϰ�");
}