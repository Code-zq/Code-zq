#include"Employee.h"

Employee::Employee(int id, string name, int dId) {

	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Employee::showInfo() {
	cout << "ְ����ţ�" << this->m_Id << endl;
	cout << "\tְ��������" << this->m_Name << endl;
	cout << "\t��λ��" << this->getDeptName() << endl;
	cout << "\t��λְ����ɾ�����������" << endl;

}


string Employee::getDeptName() {

	return string("Ա��");
}
