#include"Boss.h"

//构造
Boss::Boss(int id, string name, int deptid) {
	m_Id = id;
	m_Name = name;
	m_DeptId = deptid;
}
//显示信息
void Boss::Showinfo() {
	cout << "员工编号：" << m_Id
		<< "\t员工姓名：" << m_Name
		<< "\t岗位：" << GetDeptName()
		<< "\t岗位职责：指导经理。" << endl;

}

//获取岗位名称
string Boss::GetDeptName() {
	return string("老板");
}