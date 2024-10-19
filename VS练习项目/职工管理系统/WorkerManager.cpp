#include"WorkerManager.h"
#include"Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"


WorkerManager::WorkerManager() {

	//初始化人数
	this->m_EmpNum = 0;

	//初始化数组指针
	this->m_EmpArray = 0;


	ifstream ifs;

	ifs.open(FILENAME, ios::in);
	
	//文件不存在情况
	if (!ifs.is_open()) {

		cout << "文件不存在" << endl; //测试输出

		this->m_EmpNum = 0;//初始化人数
		this->m_FileIsEmpty = true;//初始化文件为空
		this->m_EmpArray = NULL;//初始化数组
		ifs.close();//关闭文件
		return;

	}

	//文件存在，并且没有记录

	char ch;
	ifs >> ch;//右移读一个字符 读结尾符
	if (ifs.eof()) {

		//cout << "文件为空" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}

	//文件存在 且记录数据

	int num = this->get_EmpNum();
	//cout << "职工人数为：" << num << endl;
	this->m_EmpNum = num;

	//开辟空间
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//将文件的数据存到数组
	this->init_Emp();

	//测试代码
	/*for (int i = 0; i < this->m_EmpNum; i++) {

		cout << this->m_EmpArray[i]->m_Id 
		 << this->m_EmpArray[i]->m_Name 
		 << this->m_EmpArray[i]->m_DeptId << endl;
	}*/
}
//读文件的初始化
void WorkerManager::init_Emp() {

	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {

		Worker* worker = NULL;
		//根据不同的部门id创建不同的对象
		if (dId == 1) {

			worker = new Employee(id, name, dId);

		}
		else if (id == 2) {
			
			worker = new Manager(id, name, dId);
		
		}
		else {
			worker = new Boss(id, name, dId);
		}
		//存放再数组中
		this->m_EmpArray[index] = worker;
		index++;
	}
}

int WorkerManager::get_EmpNum() {//获取员工个数

	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId) {
		num++;
	}
	ifs.close();

	return num;
}

void WorkerManager::Add_Emp() {

	cout << "请输入增加的职工数量" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0) {
		//计算新空间的大小
		int newSize = this->m_EmpNum + addNum;

		//开辟新的空间

		Worker** newSpace = new Worker * [newSize];

		//将空间的内容存放到新空间下
		if (this->m_EmpArray != NULL) {

			for (int i = 0; i < this->m_EmpNum; i++) {

				newSpace[i] = this->m_EmpArray[i];
			}

		}

		//输入新的数据
		for (int i = 0; i < addNum; i++) {

			int id;
			string name;
			int dSelect;

			cout << "请输入第" << i + 1 << "个新职工的编号" << endl;

			cin >> id;

			cout << "请输入第" << i + 1 << "个新职工的姓名" << endl;

			cin >> name;

			cout << "请选择该职工的岗位" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;

			cin >> dSelect;


			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1://普通员工
				worker = new Employee(id, name, 1);
				break;
			case 2://经理
				worker = new Manager(id, name, 1);
				break;
			case 3://老板
				worker = new Boss(id, name, 1);
				break;

			default:
				break;
			}

			newSpace[this->m_EmpNum + i] = worker;
			//插入数据

		}

		//释放原有的空间
		delete[] this->m_EmpArray;

		//更改新空间的指向

		this->m_EmpArray =  newSpace;


		//更新新的个数
		this->m_EmpNum = newSize;

		//更新职工不为空的标志

		this->m_FileIsEmpty = false;

		//提示信息
		cout << "添加成功" << addNum << "名新职工" << endl;

		this->save();
	}

	else {
		cout << "输入有误" << endl;
	}

	system("pause");
	system("cls");
}

//保存文件
void WorkerManager:: save() {

	ofstream ofs;

	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++) {

		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << " " << endl;
	}

	ofs.close();
}


//显示职工
void WorkerManager::show_Emp() {

	if (this->m_FileIsEmpty) {

		cout << "文件不存在或记录为空" << endl;
	}
	else {
		for (int i = 0; i < m_EmpNum; i++) {

			//利用多态调用接口
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

//删除职工
void WorkerManager::Del_Emp() {

	if (this->m_FileIsEmpty) {

		cout << "文件不存在或记录为空" << endl;
	}
	else {

		cout << "请输入想要删除的职工编号：" << endl;
		int id=0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1) {

			//数据前移

			for (int i = index; i < this->m_EmpNum - 1; i++) {

				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			//更新数组
			this->m_EmpNum--;

			this->save();
			
			cout << "删除成功" << endl;

		}
		else {

			cout << "删除失败，未找到该职工" << endl;
		}
	}
	system("pause");
	system("cls");

}

void WorkerManager::Mod_Emp() {

	if (this->m_FileIsEmpty) {

		cout << "文件不存在或记录为空" << endl;
	}
	else {
		cout << "请输入要修改的职工编号" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);

		if (ret != -1) {

			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = " ";
			int dSelect = 0;
			cout << "查到：" << id << "号职工，请输入新职工号" << endl;
			cin >> newId;

			cout << "请输入新姓名：" << endl;
			cin >> newName;

			cout << "请输入岗位：" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:

				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}

			//更改数据 到数组中

			this->m_EmpArray[ret] = worker;

			cout << "修改成功！" << endl; //<< this->m_EmpArray[ret]->m_DeptId 

			this->save();
		}
		else {
			cout << "修改失败，查无此人" << endl;
		}


	}

	system("pause");
	system("cls");
}

//文件是否存在
int WorkerManager::IsExist(int id) {

	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++) {

		if (this->m_EmpArray[i]->m_Id == id) {

			index = i;
			break;
		}
		return -1;
	}
}


//查找职工

void WorkerManager::Find_Emp() {

	if (this->m_FileIsEmpty) {

		cout << "文件不存在或记录为空" << endl;
		
	}
	else {

		cout << "请输入查找的方式" << endl;
		cout << "1.按职工编号查找" << endl;
		cout << "2.按职工姓名查找" << endl;

		int select = 0;

		cin >> select;

		if (select == 1) {

			int id;
			cout << "请输入查找的职工编号" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1) {

				cout << "查找成功" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else {
				cout << "查找失败，查无此人" << endl;
			}
		}

		else if (select == 2) {//按照姓名查找

			string name;
			cout << "请输入查找的姓名：" << endl;
			cin >> name;

			bool flag = false;//查找到的标志

			for (int i = 0; i < m_EmpNum; i++) {

				if (m_EmpArray[i]->m_Name == name) {

					cout << "查找成功，职工编号为："
						<< m_EmpArray[i]->m_Id
						<< "号的信息如下：" << endl;

					flag = true;
					this->m_EmpArray[i]->showInfo();

				}
			}
			if (flag = false) {

				cout << "查找失败，查无此人" << endl;
			}
		}
		else {
			cout << "输入的选项有误" << endl;
		}


	}

	system("pause");
	system("cls");

}


//排序员工
void WorkerManager:: Sort_Emp() {

	if (this->m_FileIsEmpty) {

		cout << "文件不存在或记录为空" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "请选择排序方式：" << endl;
		cout << "1.按职工号进行升序" << endl;
		cout << "2.按职工号进行降序" << endl;
	}
	int select = 0;
	cin >> select;
	//选择排序
	for (int i = 0; i < m_EmpNum; i++) {

		int minOrMax = i;
		for (int j = i + 1; j < m_EmpNum; j++) {

			if (select == 1) {
				
				//升序
					if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id) {

						minOrMax = j;
					}
			}

			else {//降序

				if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[j]->m_Id) {

					minOrMax = j;
				}
			}
		}

		if (i != minOrMax) {
			Worker* temp = m_EmpArray[i];
			m_EmpArray[i] = m_EmpArray[minOrMax];
			m_EmpArray[minOrMax] = temp;
		}

	}

	cout << "排序成功，排序后结果为：" << endl;
	this->save();
	this->show_Emp();

}

//清空文件
void WorkerManager::Clean_File() {

	cout << "确认清空：" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;

	int select = 0;
	cin >> select;


	if (select == 1) {

		//打开模式 ios::trunc 如果存在删除文件并重新创建

		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL) {

			for (int i = 0; i < this->m_EmpNum; i++)
			{

				delete this->m_EmpArray[i];
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;

		}

		cout << "清空成功" << endl;
	}
		system("pause");
		system("cls");
		
	}
	


	


void WorkerManager::Show_Menu() {


	cout << "********************************" << endl;
	cout << "******欢迎使用职工管理系统******" << endl;
	cout << "****** 0.退出管理程序  *********" << endl;
	cout << "****** 1.增加职工信息  *********" << endl;
	cout << "****** 2.显示职工信息  *********" << endl;
	cout << "****** 3.删除离职员工  *********" << endl;
	cout << "****** 4.修改职工信息  *********" << endl;
	cout << "****** 5.查找职工信息  *********" << endl;
	cout << "****** 6.按照编号排序  *********" << endl;
	cout << "****** 7.清空所有文档  *********" << endl;
	cout << "********************************" << endl;

	cout << endl;
}


void WorkerManager::ExitSystem() {

	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);//退出
}

WorkerManager::~WorkerManager() {

	if (this->m_EmpArray != NULL) {

		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}

}
