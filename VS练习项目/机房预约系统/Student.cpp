#include"Student.h"
#include<fstream>
#include"global.h"


Student::Student() {

}


Student::Student(int id, string name, string pwd) {

	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;

	//��ʼ������

	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom c;
	while (ifs >> c.m_ComId && ifs >> c.m_MaxNum) {

		vcom.push_back(c);
	}
	ifs.close();
}



 void Student::operMenu() {

	 cout << "1.����ԤԼ" << endl;
	 cout << "2.�鿴����ԤԼ" << endl;
	 cout << "3.�鿴����ԤԼ" << endl;
	 cout << "4.ȡ��ԤԼ" << endl;
	 cout << "0.ע����¼" << endl;

 }



void Student::applyOrder() {

	cout << "ԤԼʱ��:" << endl;
	cout << "1.��һ" << endl;
	cout << "2.�ܶ�" << endl;
	cout << "3.����" << endl;
	cout << "4.����" << endl;
	cout << "5.����" << endl;

	int date = 0;
	int interval = 0;
	int room = 0;

	while (true) {

		cin >> date;
		if (date >= 1 && date <= 5) {
			
			break;
		}
		cout << "������������������" << endl;
	}


	cout << "������ʱ���" << endl;
	cout << "1.����" << endl;
	cout << "2.����" << endl;


	while (true) {

		cin >> interval;
		if (interval >= 1 && interval <= 2) {

			break;
		}
		cout << "������������������" << endl;
	}
	cout << "��ѡ�����" << endl;
	cout << "1.1�Ż�������Ϊ��" << vcom[0].m_MaxNum << endl;
	cout << "2.2�Ż�������Ϊ��" << vcom[1].m_MaxNum << endl;
	cout << "3.3�Ż�������Ϊ��" << vcom[2].m_MaxNum << endl;


	while (true) {
		cin >> room;
		if (room >= 1 && room <= 3) {

			break;

		}
		cout << "������������������" << endl;
	}
	cout << "ԤԼ�ɹ� �����" << endl;

	ofstream ofs(ORDER_FILE, ios::app);
	ofs << "date:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->m_Id << " ";
	ofs << "stuName:" << this->m_Name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();

	system("pause");
	system("cls");
}



void Student::showMyOrder() {

	OrderFile of;
	if (of.m_Size == 0) {

		cout << "��������¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++) {
		//string תint
		//.c_str  string ǿת��const char*  atoi c���Ե�int����
		if (atoi(of.m_orderDate[i]["stuId"].c_str())==this->m_Id) {

			cout << "ԤԼ����: ��" << of.m_orderDate[i]["date"]<<" ";
			cout << "ʱ��: " << (of.m_orderDate[i]["interval"] =="1" ? "����" : "����")<<" ";
			cout << "������: " << of.m_orderDate[i]["roomId"]<<" ";
			//cout << of.m_Size << endl;
			string status = "״̬:  ";//0 ȡ����ԤԼ  1�����  2��ԤԼ   -1ԤԼʧ��
			if (of.m_orderDate[i]["status"] == "1") {

				status += "�����";
			}
			else if(of.m_orderDate[i]["status"] == "2") {

				status += "ԤԼ�ɹ�";
			}
			else if (of.m_orderDate[i]["status"] == "-1") {

				status += "ԤԼʧ��";
			}
			else{

				status += "ԤԼȡ��";
			}
			cout << status << endl;

		}
	}

	system("pause");
	system("cls");

}



void Student::showAllOrder() {


	OrderFile of;
	if (of.m_Size == 0) {

		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;

	}


	for (int i = 0; i < of.m_Size; i++) {

		cout << i + 1 << "*   ";


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
		else if (of.m_orderDate[i]["status"] == "-1") {

			status += "ԤԼʧ��";
		}
		else {

			status += "ԤԼȡ��";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}



void Student::cancelOrder() {

	OrderFile of;
	if (of.m_Size == 0) {

		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "����л�ԤԼ�ɹ��ļ�¼����ȡ����������ȡ���ļ�¼" << endl;

	vector<int>v;
	int index = 1;
	for (int i = 0; i < of.m_Size; i++) {

		if (atoi(of.m_orderDate[i]["stuId"].c_str()) == this->m_Id) {

			if (of.m_orderDate[i]["status"] == "1" || of.m_orderDate[i]["status"] == "2")
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

	}
	
	cout << "������ȡ���ļ�¼��0������" << endl;
	int select = 0;
	
	while (true) {
		//cout << v.size();
		cin >> select;
		if (select >= 0 && select <= v.size()) {

			if (select == 0) {

				break;
			}
			else {
				//cout << "��¼��λ�ã�" << v[select - 1];
				of.m_orderDate[ v[select - 1 ]]["status"]="0";
				of.updateOrder();
				cout << "��ȡ��ԤԼ" << endl;
				break;
			}
		}

		cout << "������������������" << endl;
	}


	system("pause");
	system("cls");
}
