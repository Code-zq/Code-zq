#include"Manager.h"

Manager::Manager(int id, string name ,int dId) {


	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;

}

void Manager::showInfo() {

	cout << "ְ����ţ�" << this->m_Id << endl;
	cout << "\tְ��������" << this->m_Name << endl;
	cout << "\t��λ��" << this->getDeptName() << endl;
	cout << "\t��λְ������ϰ彻��Ĺ����������·������Ա��" << endl;
	

}

string Manager::getDeptName() {

	return string("����");
}