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

		Manager* man = (Manager*)manager;//父类manager 指针 强转为子类 来调用

		int select = 0;

		cin >> select;
		if (select == 1) {

			cout << "添加账号" << endl;
			man->addPerson();

		}
		else if (select == 2) {

			cout << "查看账号" << endl;
			man->showPerson();
		}
		else if (select == 3) {

			cout << "查看机房" << endl;
			man->showComputer();
		}
		else if (select == 4) {
			cout << "清空预约" << endl;
			man->cleanFile();
		}
		else {

			delete manager;

			cout << "注销成功" << endl;

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

		if (select == 1) {//申请预约

			stu->applyOrder();
		}
		else if (select == 2) {//查看自己预约

			stu->showMyOrder();
		}
		else if (select == 3) {//查看所有预约

			stu->showAllOrder();
		}
		else if (select == 4) {//取消预约

			stu->cancelOrder();
		}
		else {
			delete student;
			cout << "注销成功" << endl;
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

		if (select == 1) {//查看所有预约

			tea->showAllOrder();
		}
		else if (select == 2) {//审核预约

			tea->validOrder();
		}
		
		else {
			delete teacher;
			cout << "注销成功" << endl;
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

		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1) {

		cout << "请输入学号： " << endl;
		cin >> id;
	}
	else if (type == 2) {

		cout << "请输入职工号： " << endl;
		cin >> id;

	}

	cout << "请输入用户名： " << endl;
	cin >> name;


	cout << "请输入密码： " << endl;
	cin >> pwd;



	//验证

	if (type == 1) {

		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
			/*cout << fId << endl;
			cout << fName << endl;
			cout << fPwd << endl;*/
			if (id == fId && name == fName && pwd == fPwd) {

				cout << "学生验证登录成功" << endl;
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

				cout << "教师验证登录成功" << endl;
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

				cout << "管理员验证登录成功" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);

				managerMenu(person);
				return;
			}


		}
	}

	cout << "验证登录失败" << endl;
	system("pause");
	system("cls");
	return;
}




int main() {
	
	int select = 0;
	while (true) {
		cout << "请输入身份" << endl;
		cout << "1.学生" << endl;
		cout << "2.教师" << endl;
		cout << "3.管理员" << endl;
		cout << "0.退出" << endl;

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
			cout << "欢迎下次使用" << endl;

			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择" << endl;
			system("pause");
			system("cls");
			break;
		}

		

	}
	
	system("pause");
	return 0;
}


