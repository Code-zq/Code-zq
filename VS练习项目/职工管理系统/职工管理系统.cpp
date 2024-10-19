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
//	worker = new Employee(1,"张三",1);
//	worker->showInfo();
//	delete worker;
//
//
//	
//	worker = new Manager(1,"张三",1);
//	worker->showInfo();
//	delete worker;
//
//	
//	
//	worker = new Boss(1,"张三",1);
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
		cout << "请输入你的选择" << endl;
		cin >> choice;

		switch (choice) {

		case 0://退出系统
			wm.ExitSystem();
			break;
		case 1://添加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			wm.show_Emp();
			break;
		case 3://删除职工
			wm.Del_Emp();


		//{
		//		//测试代码
		//	int ret = wm.IsExit(1);
		//	if (ret != -1) {

		//		cout << "职工存在" << endl;
		//	}
		//	else {
		//		cout << "职工不存在" << endl;
		//	}

		//}
			break;
		case 4://修改职工
			wm.Mod_Emp();
			break;
		case 5://查找职工
			wm.Find_Emp();
			break;
		case 6://排序职工
			wm.Sort_Emp();
			break;
		case 7://清空文件

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

