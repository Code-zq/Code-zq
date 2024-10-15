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

//�����ϵ��
void addPerson(Addressbook* abs) {

	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX) {

		cout << "ͨѶ¼����" << endl;
		return;
	}

	else {
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;


		//�Ա�

		
		cout << "�������Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {

				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else {
				cout << "������������������" << endl;
			}
			 
				
				
			}



			//����

			int age = 0;
			cout << "����������" << endl;
		

		   while (true) {

				cin >> age;
			if (age >= 0 && age < 150) {

				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			else {
				cout << "������������������" << endl;
			}
				
			}


			string phone ;
			cout << "������绰���룺" << endl;
			while (true) {
			
			cin >> phone;
			int len = phone.length();
			
				if (len < 6 || len>11) {
					cout << "������������������" << endl;
				}
				else {

					abs->personArray[abs->m_Size].m_Phone = phone;
					break;
				}

			}

			string addr;
			cout << "������סַ���ƣ�" << endl;
			cin >> addr;
			abs->personArray[abs->m_Size].m_Addr = addr;

			abs->m_Size++;
			cout << "��ӳɹ�" << endl;

			system("cls");
		}
	}



//��ʾ��ϵ��

void showPerson(Addressbook *abs) {

	if (abs->m_Size==0) {

		cout << "��������ϵ��" << endl;
	}
	else {

		for (int i = 0; i < abs->m_Size; i++) {

			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex==1?"��":"Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}


//�����ϵ���Ƿ����

int isExist(Addressbook* abs, string name) {

	for (int i = 0; i < abs->m_Size; i++) {

		if (abs->personArray[i].m_Name == name) {

			return i;//�����±�
		}
		
	}
	{
		return -1;
		}

}

//ɾ����ϵ��
void deletePerson(Addressbook* abs) {

	cout << "������Ҫɾ������ϵ��������" << endl;

	string name;
	cin >> name;
	//Addressbook* abs ��ʾ abs ��һ��ָ�� Addressbook ���͵�ָ��
	//�ں����ڲ��������ʹ�� abs ������ Addressbook �ĳ�Ա��������Ҫ��ÿ�η���ʱʹ��* �������á�
	int ret = isExist(abs, name);


	//ɾ�� ����ǰ�� ����������

	if (ret != -1) {
	

		for (int i = ret; i < abs->m_Size; i++) {

			abs->personArray[i] = abs->personArray[i + 1];

		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}else {
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}



//������ϵ��

void findPerson(Addressbook* abs) {
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1) {

		cout << "������" << abs->personArray[ret].m_Name << endl;
		cout << "�Ա�" << abs->personArray[ret].m_Sex << endl;
		cout << "���䣺" << abs->personArray[ret].m_Age << endl;
		cout << "�绰��" << abs->personArray[ret].m_Phone << endl;
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else {
		cout << "δ�ҵ���ϵ��" << endl;
	}

	system("pause");
	system("cls");
}

//�޸���ϵ��

void modifyPerson(Addressbook* abs) {

	cout << "������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {
		cout << "�ҵ���ϵ����Ϣ����" << endl;
		cout << "������" << abs->personArray[ret].m_Name << endl;
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1?"��":"Ů") << endl;
		cout << "���䣺" << abs->personArray[ret].m_Age << endl;
		cout << "�绰��" << abs->personArray[ret].m_Phone << endl;
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
		cout << "���������޸ĵĲ���" << endl;
		cout << "1-����\t" << "2-�Ա�\t" << "3-����\t" << "4-�绰\t" << "5-סַ\t" << endl;
		int select = 0;
		cin >> select;

		switch (select) {

		case 1:
		{
			cout << "�������µ�����" << endl;
			string name;
			cin >> name;
			abs->personArray[ret].m_Name = name;
			cout << "�޸ĳɹ�" << endl;

		}
		break;

		case 2:
		{
			cout << "�������޸ĵ��Ա�(1--��\t2--Ů" << endl;
			int sex = 0;

			while (true)
			{
				cin >> sex;
				if (sex == 1 || sex == 2) {

					abs->personArray[ret].m_Sex = sex;
					cout << "�޸ĳɹ�" << endl;
					break;
				}
				cout << "������������������" << endl;
			}
			break;
		}



		case 3:
		{
			cout << "�������µ�����" << endl;
			int age = 0;
			while (true) {
				cin >> age;
				if (age > 0 && age < 150) {

					abs->personArray[ret].m_Age = age;
					cout << "�޸ĳɹ�" << endl;
					break;
				}
				cout << "���䲻�Ϸ�" << endl;
			}
			break;
		}

		case 4: {
			cout << "�������µĵ绰����" << endl;
			string phone;
			int len = phone.length();
			while (true) {
				cin >> phone;
				if (len > 6 || len < 11) {

					abs->personArray[ret].m_Phone = phone;
					cout << "�޸ĳɹ�" << endl;
					break;

				}
				cout << "�绰���볤�Ȳ��Ϸ�" << endl;

			}
			break;
		}
		case 5: {
			cout << "�������µļ�ͥסַ" << endl;
			string addr;
			cin >> addr;
			abs->personArray[ret].m_Addr = addr;
			cout << "�޸ĳɹ�" << endl;
			break;
		}
		default:
			cout << "��Ч��ѡ��" << endl;
			break;

		}
	}
	else {
		cout << "δ�ҵ���ϵ��" << endl;
	}


	system("pause");
	system("cls");
}


//�����ϵ��

void cleanPerson(Addressbook* abs) {

	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;

	system("pause");
	system("cls");
}


void showMenu() {
	cout << "****************************"<< endl;
	cout << "****** 1.�����ϵ��  ******" << endl;
	cout << "****** 2.��ʾ��ϵ��  ******" << endl;
	cout << "****** 3.ɾ����ϵ��  ******" << endl;
	cout << "****** 4.������ϵ��  ******" << endl;
	cout << "****** 5.�޸���ϵ��  ******" << endl;
	cout << "****** 6.�����ϵ��  ******" << endl;
	cout << "****** 0.�˳�ͨѶ¼  ******" << endl;
	cout << "***************************" << endl;
}
int main() {

	int select = 0;

	//ͨѶ¼�ṹ�����
	

	Addressbook abs;
	abs.m_Size = 0;

	


	while (true) {
		//�˵�����
		showMenu();
		cin >> select;

		switch (select)
		{

		case 1://�����ϵ��

			addPerson(&abs);//���õ�ַ���ݿ�������ʵ��
			break;

		case 2://��ʾ��ϵ��

			showPerson(&abs);
			break;

		case 3://ɾ����ϵ��


			deletePerson(&abs);

			//����� case��������������
		/*{
			cout << "������Ҫɾ������ϵ��������" << endl;
			string name;
			cin >> name;

			if (isExist(&abs, name) == -1) {

				cout << "���޴���" << endl;
			}
			else {
				cout << "�ҵ�����" << endl;
			}
		}*/
			break;

		case 4://������ϵ��

			findPerson(&abs);
			break;

		case 5://�޸���ϵ��

			modifyPerson(&abs);
			break;

		case 6://�����ϵ��

			cleanPerson(&abs);
			break;

		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
	     default:
			 cout << "��Ч������" << endl;
			
			break;
			
		}

	}

	system("pause");

}