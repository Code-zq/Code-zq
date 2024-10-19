#include"Boss.h"


Boss::Boss(int id,string name,int dId) {

	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;

}

void Boss::showInfo() {

	cout << "职工编号：" << this->m_Id << endl;
	cout << "\t职工姓名：" << this->m_Name << endl;
	cout << "\t岗位：" << this->getDeptName() << endl;
	cout << "\t岗位职责：管理公司的所有事务" << endl;
}

string Boss::getDeptName() {

	return string("总裁");
}