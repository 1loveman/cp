#include"Employee.h"

//构造函数
Employee::Employee(int id, string name, int deptid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = deptid;

}

//显示个人信息
void Employee::Showinfo() {
	cout << "职工编号：" << m_Id 
		<< "\t职工姓名：" << m_Name
		<< "\t岗位：" << GetDeptName()
		<< "\t岗位职责：完成经理交给的任务。" << endl;
}

//获取岗位名称
string Employee::GetDeptName() {
	return string("员工");
}