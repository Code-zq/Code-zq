#include"WorkerManager.h"
#include"Worker.h"
#include"Boss.h"
#include"Manager.h"
#include"Employee.h"
#include<iostream>
using namespace std;

//
//void test01() {
//
//	Worker* worker = NULL;
//	worker = new Employee(1,"����",1);
//	worker->showInfo();
//	delete worker;
//
//
//	
//	worker = new Manager(1,"����",1);
//	worker->showInfo();
//	delete worker;
//
//	
//	
//	worker = new Boss(1,"����",1);
//	worker->showInfo();
//	delete worker;
//
//
//
//}
int main() {
	//test01();
	WorkerManager wm;
	int choice = 0;
	while (true) {
		
		wm.Show_Menu();
		cout << "���������ѡ��" << endl;
		cin >> choice;

		switch (choice) {

		case 0://�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1://���ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			wm.show_Emp();
			break;
		case 3://ɾ��ְ��
			wm.Del_Emp();


		//{
		//		//���Դ���
		//	int ret = wm.IsExit(1);
		//	if (ret != -1) {

		//		cout << "ְ������" << endl;
		//	}
		//	else {
		//		cout << "ְ��������" << endl;
		//	}

		//}
			break;
		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.Find_Emp();
			break;
		case 6://����ְ��
			wm.Sort_Emp();
			break;
		case 7://����ļ�

			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}

