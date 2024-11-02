#include"Teacher.h"
#include"OrderFile.h"
#include"Student.h"


Teacher::Teacher() {

}


Teacher::Teacher(int empId, string name, string pwd) {


	this->m_EmpId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;
}

 void Teacher::operMenu() {

	 cout << "1.�鿴����ԤԼ" << endl;
	 cout << "2.���ԤԼ" << endl;
	 cout << "0.ע����¼" << endl;

}




void Teacher::showAllOrder() {

	Student s;
	s.showAllOrder();
	
}

void Teacher::validOrder() {
	OrderFile of;
	if (of.m_Size == 0) {

		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "����˵ļ�¼���£�" << endl;


	vector<int>v;
	int index = 1;
	for (int i = 0; i < of.m_Size; i++) {

	

			if (of.m_orderDate[i]["status"] == "1")
			{

				v.push_back(i);
				cout << index++ << " *  ";
				cout << "ԤԼ����: ��" << of.m_orderDate[i]["date"] << " ";
				cout << "ʱ��: " << (of.m_orderDate[i]["interval"] == "1" ? "����" : "����") << " ";
				cout << "ѧ��: " << of.m_orderDate[i]["stuId"] << " ";
				cout << "������: " << of.m_orderDate[i]["roomId"] << " ";


				string status = "״̬:";//0 ȡ����ԤԼ  1�����  2��ԤԼ   -1ԤԼʧ��
				if (of.m_orderDate[i]["status"] == "1") {

					status += "�����";
				}
				else if (of.m_orderDate[i]["status"] == "2") {

					status += "ԤԼ�ɹ�";
				}

				cout << status << endl;


			}

		

	}

	cout << "������ȡ���ļ�¼��0������" << endl;


	int select = 0;
	int ret = 0;

	while (true) {
		//cout << v.size();
		cin >> select;
		if (select >= 0 && select <= v.size()) {

			if (select == 0) {

				break;
			}
			else {
				cout << "��������˽����" << endl;
				cout << "1.ͨ��" << endl;
				cout << "2.�ܾ�" << endl;
				cin >> ret;
				if (ret == 1) {
					of.m_orderDate[v[select - 1]]["status"] = "2";
				}
				else if (ret == 2) {
					of.m_orderDate[v[select - 1]]["status"] = "-1";
				}
				else {
					cout << "������������������" << endl;
				}
				


				of.updateOrder();
				cout << "������" << endl;
				break;
				
			}
		}

		cout << "������������������" << endl;
	}

	system("pause");
	system("cls");
	
}
