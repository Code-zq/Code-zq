#include<iostream>
#include"global.h"
#include"Identity.h"
#include<fstream>
#include"Student.h"
#include<string>
#include"Manager.h"
#include"Teacher.h"
using namespace std;

void managerMenu(Identity*& manager) {

	while (true) {

		manager->operMenu();

		Manager* man = (Manager*)manager;//����manager ָ�� ǿתΪ���� ������

		int select = 0;

		cin >> select;
		if (select == 1) {

			cout << "����˺�" << endl;
			man->addPerson();

		}
		else if (select == 2) {

			cout << "�鿴�˺�" << endl;
			man->showPerson();
		}
		else if (select == 3) {

			cout << "�鿴����" << endl;
			man->showComputer();
		}
		else if (select == 4) {
			cout << "���ԤԼ" << endl;
			man->cleanFile();
		}
		else {

			delete manager;

			cout << "ע���ɹ�" << endl;

			system("pause");
			system("cls");
			return;

		}
	}

}


void studenMenu(Identity * &student) {

	while (true) {

		student->operMenu();

		Student* stu = (Student*)student;
		
		int select = 0;

		cin >> select;

		if (select == 1) {//����ԤԼ

			stu->applyOrder();
		}
		else if (select == 2) {//�鿴�Լ�ԤԼ

			stu->showMyOrder();
		}
		else if (select == 3) {//�鿴����ԤԼ

			stu->showAllOrder();
		}
		else if (select == 4) {//ȡ��ԤԼ

			stu->cancelOrder();
		}
		else {
			delete student;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}

}


void teacherMenu(Identity*& teacher) {

	while (true) {

		teacher->operMenu();

	Teacher* tea = (Teacher*)teacher;

		int select = 0;

		cin >> select;

		if (select == 1) {//�鿴����ԤԼ

			tea->showAllOrder();
		}
		else if (select == 2) {//���ԤԼ

			tea->validOrder();
		}
		
		else {
			delete teacher;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}

}

void LoginIn(string fileName, int type) {


	Identity * person = NULL;
	
	ifstream ifs;
	ifs.open(fileName, ios::in);

	if (!ifs.is_open()) {

		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1) {

		cout << "������ѧ�ţ� " << endl;
		cin >> id;
	}
	else if (type == 2) {

		cout << "������ְ���ţ� " << endl;
		cin >> id;

	}

	cout << "�������û����� " << endl;
	cin >> name;


	cout << "���������룺 " << endl;
	cin >> pwd;



	//��֤

	if (type == 1) {

		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
			/*cout << fId << endl;
			cout << fName << endl;
			cout << fPwd << endl;*/
			if (id == fId && name == fName && pwd == fPwd) {

				cout << "ѧ����֤��¼�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				
				studenMenu(person);
				return;
			}


		}
	}
	else if (type == 2) {


		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
			/*cout << fId << endl;
			cout << fName << endl;
			cout << fPwd << endl;*/
			if (id == fId && name == fName && pwd == fPwd) {

				cout << "��ʦ��֤��¼�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				teacherMenu(person);
				return;
			}


		}
	}

	else if (type == 3) {


		string fName;
		string fPwd;

		while ( ifs >> fName && ifs >> fPwd) {
			/*cout << fId << endl;
			cout << fName << endl;
			cout << fPwd << endl;*/
			if ( name == fName && pwd == fPwd) {

				cout << "����Ա��֤��¼�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);

				managerMenu(person);
				return;
			}


		}
	}

	cout << "��֤��¼ʧ��" << endl;
	system("pause");
	system("cls");
	return;
}




int main() {
	
	int select = 0;
	while (true) {
		cout << "���������" << endl;
		cout << "1.ѧ��" << endl;
		cout << "2.��ʦ" << endl;
		cout << "3.����Ա" << endl;
		cout << "0.�˳�" << endl;

		cin >> select;

		switch (select)
		{
		case 1:
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3:
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;

			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}

		

	}
	
	system("pause");
	return 0;
}


