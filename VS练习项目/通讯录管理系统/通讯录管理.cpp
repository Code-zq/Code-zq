#include<iostream>
#define MAX 1000
using namespace std;

struct Person {


	string m_Name;
	
	int m_Sex;

	int m_Age;

	string m_Phone;

	string m_Addr;


};
struct Addressbook {

	
	int m_Size;
	struct Person personArray[MAX];

	

};

//添加联系人
void addPerson(Addressbook* abs) {

	//判断通讯录是否已满
	if (abs->m_Size == MAX) {

		cout << "通讯录已满" << endl;
		return;
	}

	else {
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;


		//性别

		
		cout << "请输入性别：" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {

				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else {
				cout << "输入有误，请重新输入" << endl;
			}
			 
				
				
			}



			//年龄

			int age = 0;
			cout << "请输入年龄" << endl;
		

		   while (true) {

				cin >> age;
			if (age >= 0 && age < 150) {

				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			else {
				cout << "输入有误，请重新输入" << endl;
			}
				
			}


			string phone ;
			cout << "请输入电话号码：" << endl;
			while (true) {
			
			cin >> phone;
			int len = phone.length();
			
				if (len < 6 || len>11) {
					cout << "输入有误，请重新输入" << endl;
				}
				else {

					abs->personArray[abs->m_Size].m_Phone = phone;
					break;
				}

			}

			string addr;
			cout << "请输入住址名称：" << endl;
			cin >> addr;
			abs->personArray[abs->m_Size].m_Addr = addr;

			abs->m_Size++;
			cout << "添加成功" << endl;

			system("cls");
		}
	}



//显示联系人

void showPerson(Addressbook *abs) {

	if (abs->m_Size==0) {

		cout << "不存在联系人" << endl;
	}
	else {

		for (int i = 0; i < abs->m_Size; i++) {

			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex==1?"男":"女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}


//检查联系人是否存在

int isExist(Addressbook* abs, string name) {

	for (int i = 0; i < abs->m_Size; i++) {

		if (abs->personArray[i].m_Name == name) {

			return i;//返回下标
		}
		
	}
	{
		return -1;
		}

}

//删除联系人
void deletePerson(Addressbook* abs) {

	cout << "请输入要删除的联系人姓名：" << endl;

	string name;
	cin >> name;
	//Addressbook* abs 表示 abs 是一个指向 Addressbook 类型的指针
	//在函数内部，你可以使用 abs 来访问 Addressbook 的成员，而不需要在每次访问时使用* 来解引用。
	int ret = isExist(abs, name);


	//删除 数据前移 做个数减少

	if (ret != -1) {
	

		for (int i = ret; i < abs->m_Size; i++) {

			abs->personArray[i] = abs->personArray[i + 1];

		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}else {
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}



//查找联系人

void findPerson(Addressbook* abs) {
	cout << "请输入你要查找的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1) {

		cout << "姓名：" << abs->personArray[ret].m_Name << endl;
		cout << "性别：" << abs->personArray[ret].m_Sex << endl;
		cout << "年龄：" << abs->personArray[ret].m_Age << endl;
		cout << "电话：" << abs->personArray[ret].m_Phone << endl;
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else {
		cout << "未找到联系人" << endl;
	}

	system("pause");
	system("cls");
}

//修改联系人

void modifyPerson(Addressbook* abs) {

	cout << "请输入要修改的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {
		cout << "找到联系人信息如下" << endl;
		cout << "姓名：" << abs->personArray[ret].m_Name << endl;
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1?"男":"女") << endl;
		cout << "年龄：" << abs->personArray[ret].m_Age << endl;
		cout << "电话：" << abs->personArray[ret].m_Phone << endl;
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
		cout << "请输入想修改的部分" << endl;
		cout << "1-姓名\t" << "2-性别\t" << "3-年龄\t" << "4-电话\t" << "5-住址\t" << endl;
		int select = 0;
		cin >> select;

		switch (select) {

		case 1:
		{
			cout << "请输入新的姓名" << endl;
			string name;
			cin >> name;
			abs->personArray[ret].m_Name = name;
			cout << "修改成功" << endl;

		}
		break;

		case 2:
		{
			cout << "请输入修改的性别(1--男\t2--女" << endl;
			int sex = 0;

			while (true)
			{
				cin >> sex;
				if (sex == 1 || sex == 2) {

					abs->personArray[ret].m_Sex = sex;
					cout << "修改成功" << endl;
					break;
				}
				cout << "输入有误请重新输入" << endl;
			}
			break;
		}



		case 3:
		{
			cout << "请输入新的年龄" << endl;
			int age = 0;
			while (true) {
				cin >> age;
				if (age > 0 && age < 150) {

					abs->personArray[ret].m_Age = age;
					cout << "修改成功" << endl;
					break;
				}
				cout << "年龄不合法" << endl;
			}
			break;
		}

		case 4: {
			cout << "请输入新的电话号码" << endl;
			string phone;
			int len = phone.length();
			while (true) {
				cin >> phone;
				if (len > 6 || len < 11) {

					abs->personArray[ret].m_Phone = phone;
					cout << "修改成功" << endl;
					break;

				}
				cout << "电话号码长度不合法" << endl;

			}
			break;
		}
		case 5: {
			cout << "请输入新的家庭住址" << endl;
			string addr;
			cin >> addr;
			abs->personArray[ret].m_Addr = addr;
			cout << "修改成功" << endl;
			break;
		}
		default:
			cout << "无效的选择" << endl;
			break;

		}
	}
	else {
		cout << "未找到联系人" << endl;
	}


	system("pause");
	system("cls");
}


//清空联系人

void cleanPerson(Addressbook* abs) {

	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;

	system("pause");
	system("cls");
}


void showMenu() {
	cout << "****************************"<< endl;
	cout << "****** 1.添加联系人  ******" << endl;
	cout << "****** 2.显示联系人  ******" << endl;
	cout << "****** 3.删除联系人  ******" << endl;
	cout << "****** 4.查找联系人  ******" << endl;
	cout << "****** 5.修改联系人  ******" << endl;
	cout << "****** 6.清空联系人  ******" << endl;
	cout << "****** 0.退出通讯录  ******" << endl;
	cout << "***************************" << endl;
}
int main() {

	int select = 0;

	//通讯录结构体变量
	

	Addressbook abs;
	abs.m_Size = 0;

	


	while (true) {
		//菜单调用
		showMenu();
		cin >> select;

		switch (select)
		{

		case 1://添加联系人

			addPerson(&abs);//利用地址传递可以修饰实参
			break;

		case 2://显示联系人

			showPerson(&abs);
			break;

		case 3://删除联系人


			deletePerson(&abs);

			//代码段 case中用括号括起来
		/*{
			cout << "请输入要删除的联系人姓名：" << endl;
			string name;
			cin >> name;

			if (isExist(&abs, name) == -1) {

				cout << "查无此人" << endl;
			}
			else {
				cout << "找到此人" << endl;
			}
		}*/
			break;

		case 4://查找联系人

			findPerson(&abs);
			break;

		case 5://修改联系人

			modifyPerson(&abs);
			break;

		case 6://清空联系人

			cleanPerson(&abs);
			break;

		case 0://退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
	     default:
			 cout << "无效的请求" << endl;
			
			break;
			
		}

	}

	system("pause");

}