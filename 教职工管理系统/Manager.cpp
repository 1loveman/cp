#include"Manager.h"

//����
Manager::Manager(int id, string name, int deptid) {
	m_Id = id;
	m_Name = name;
	m_DeptId = deptid;
}
//��ʾ��Ϣ
void Manager::Showinfo() {
	cout << "ְ����ţ�" << m_Id 
		<< "\tְ��������" << m_Name
		<< "\t��λ��" << GetDeptName()
		<< "\t��λְ�𣺷����ϰ壬ָ��Ա����" << endl;
}
//��ʾ��λ
string Manager::GetDeptName() {
	return string("����");
}