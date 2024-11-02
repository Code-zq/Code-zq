#include"Student.h"
#include<fstream>
#include"global.h"


Student::Student() {

}


Student::Student(int id, string name, string pwd) {

	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;

	//初始化机房

	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom c;
	while (ifs >> c.m_ComId && ifs >> c.m_MaxNum) {

		vcom.push_back(c);
	}
	ifs.close();
}



 void Student::operMenu() {

	 cout << "1.申请预约" << endl;
	 cout << "2.查看自身预约" << endl;
	 cout << "3.查看所有预约" << endl;
	 cout << "4.取消预约" << endl;
	 cout << "0.注销登录" << endl;

 }



void Student::applyOrder() {

	cout << "预约时间:" << endl;
	cout << "1.周一" << endl;
	cout << "2.周二" << endl;
	cout << "3.周三" << endl;
	cout << "4.周四" << endl;
	cout << "5.周五" << endl;

	int date = 0;
	int interval = 0;
	int room = 0;

	while (true) {

		cin >> date;
		if (date >= 1 && date <= 5) {
			
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}


	cout << "请输入时间段" << endl;
	cout << "1.上午" << endl;
	cout << "2.下午" << endl;


	while (true) {

		cin >> interval;
		if (interval >= 1 && interval <= 2) {

			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}
	cout << "请选择机房" << endl;
	cout << "1.1号机房容量为：" << vcom[0].m_MaxNum << endl;
	cout << "2.2号机房容量为：" << vcom[1].m_MaxNum << endl;
	cout << "3.3号机房容量为：" << vcom[2].m_MaxNum << endl;


	while (true) {
		cin >> room;
		if (room >= 1 && room <= 3) {

			break;

		}
		cout << "输入有误，请重新输入" << endl;
	}
	cout << "预约成功 审核中" << endl;

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

		cout << "无搜索记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++) {
		//string 转int
		//.c_str  string 强转成const char*  atoi c语言的int类型
		if (atoi(of.m_orderDate[i]["stuId"].c_str())==this->m_Id) {

			cout << "预约日期: 周" << of.m_orderDate[i]["date"]<<" ";
			cout << "时段: " << (of.m_orderDate[i]["interval"] =="1" ? "上午" : "下午")<<" ";
			cout << "机房号: " << of.m_orderDate[i]["roomId"]<<" ";
			//cout << of.m_Size << endl;
			string status = "状态:  ";//0 取消的预约  1审核中  2已预约   -1预约失败
			if (of.m_orderDate[i]["status"] == "1") {

				status += "审核中";
			}
			else if(of.m_orderDate[i]["status"] == "2") {

				status += "预约成功";
			}
			else if (of.m_orderDate[i]["status"] == "-1") {

				status += "预约失败";
			}
			else{

				status += "预约取消";
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

		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;

	}


	for (int i = 0; i < of.m_Size; i++) {

		cout << i + 1 << "*   ";


		cout << "预约日期: 周" << of.m_orderDate[i]["date"] << " ";
		cout << "时段: " << (of.m_orderDate[i]["interval"] == "1" ? "上午" : "下午") << " ";
		cout << "学号: " << of.m_orderDate[i]["stuId"] << " ";
		cout << "机房号: " << of.m_orderDate[i]["roomId"] << " ";
		

		string status = "状态:";//0 取消的预约  1审核中  2已预约   -1预约失败
		if (of.m_orderDate[i]["status"] == "1") {

			status += "审核中";
		}
		else if (of.m_orderDate[i]["status"] == "2") {

			status += "预约成功";
		}
		else if (of.m_orderDate[i]["status"] == "-1") {

			status += "预约失败";
		}
		else {

			status += "预约取消";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}



void Student::cancelOrder() {

	OrderFile of;
	if (of.m_Size == 0) {

		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "审核中或预约成功的记录可以取消，请输入取消的记录" << endl;

	vector<int>v;
	int index = 1;
	for (int i = 0; i < of.m_Size; i++) {

		if (atoi(of.m_orderDate[i]["stuId"].c_str()) == this->m_Id) {

			if (of.m_orderDate[i]["status"] == "1" || of.m_orderDate[i]["status"] == "2")
			{

				v.push_back(i);
				cout << index++ << " *  ";
				cout << "预约日期: 周" << of.m_orderDate[i]["date"] << " ";
				cout << "时段: " << (of.m_orderDate[i]["interval"] == "1" ? "上午" : "下午") << " ";
				cout << "学号: " << of.m_orderDate[i]["stuId"] << " ";
				cout << "机房号: " << of.m_orderDate[i]["roomId"] << " ";


				string status = "状态:";//0 取消的预约  1审核中  2已预约   -1预约失败
				if (of.m_orderDate[i]["status"] == "1") {

					status += "审核中";
				}
				else if (of.m_orderDate[i]["status"] == "2") {

					status += "预约成功";
				}

				cout << status << endl;


			}

		}

	}
	
	cout << "请输入取消的记录，0代表返回" << endl;
	int select = 0;
	
	while (true) {
		//cout << v.size();
		cin >> select;
		if (select >= 0 && select <= v.size()) {

			if (select == 0) {

				break;
			}
			else {
				//cout << "记录的位置：" << v[select - 1];
				of.m_orderDate[ v[select - 1 ]]["status"]="0";
				of.updateOrder();
				cout << "已取消预约" << endl;
				break;
			}
		}

		cout << "输入有误请重新输入" << endl;
	}


	system("pause");
	system("cls");
}
