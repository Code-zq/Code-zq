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

	 cout << "1.查看所有预约" << endl;
	 cout << "2.审核预约" << endl;
	 cout << "0.注销登录" << endl;

}




void Teacher::showAllOrder() {

	Student s;
	s.showAllOrder();
	
}

void Teacher::validOrder() {
	OrderFile of;
	if (of.m_Size == 0) {

		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "待审核的记录如下：" << endl;


	vector<int>v;
	int index = 1;
	for (int i = 0; i < of.m_Size; i++) {

	

			if (of.m_orderDate[i]["status"] == "1")
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

	cout << "请输入取消的记录，0代表返回" << endl;


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
				cout << "请输入审核结果：" << endl;
				cout << "1.通过" << endl;
				cout << "2.拒绝" << endl;
				cin >> ret;
				if (ret == 1) {
					of.m_orderDate[v[select - 1]]["status"] = "2";
				}
				else if (ret == 2) {
					of.m_orderDate[v[select - 1]]["status"] = "-1";
				}
				else {
					cout << "输入有误请重新输入" << endl;
				}
				


				of.updateOrder();
				cout << "审核完毕" << endl;
				break;
				
			}
		}

		cout << "输入有误请重新输入" << endl;
	}

	system("pause");
	system("cls");
	
}
