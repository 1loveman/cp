#include"Employee.h"

//���캯��
Employee::Employee(int id, string name, int deptid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = deptid;

}

//��ʾ������Ϣ
void Employee::Showinfo() {
	cout << "ְ����ţ�" << m_Id 
		<< "\tְ��������" << m_Name
		<< "\t��λ��" << GetDeptName()
		<< "\t��λְ����ɾ�����������" << endl;
}

//��ȡ��λ����
string Employee::GetDeptName() {
	return string("Ա��");
}