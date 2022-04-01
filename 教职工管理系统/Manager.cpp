#include"Manager.h"

//构造
Manager::Manager(int id, string name, int deptid) {
	m_Id = id;
	m_Name = name;
	m_DeptId = deptid;
}
//显示信息
void Manager::Showinfo() {
	cout << "职工编号：" << m_Id 
		<< "\t职工姓名：" << m_Name
		<< "\t岗位：" << GetDeptName()
		<< "\t岗位职责：服务老板，指导员工。" << endl;
}
//显示岗位
string Manager::GetDeptName() {
	return string("经理");
}