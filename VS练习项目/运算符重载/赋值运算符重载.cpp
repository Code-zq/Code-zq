//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//
//	Person(int age) {
//		//new ��̬�����ڴ� int ���ص�int*   
//		// ����һ��ָ���·���� int ���Ͷ����ָ�롣���ָ��ָ����ڴ�����洢�� age ��ֵ
//		m_Age=new int (age);
//	}
//
//
//	int* m_Age;
//
//	//�����ڴ��ظ��ͷ� 
//	~Person() {
//		if (m_Age != NULL) {
//			delete m_Age;
//			m_Age = NULL;
//		}
//		
//	}
//
//
//	Person& operator=(Person &p) {
//
//		//Ӧ�����ж��Ƿ��������ڶ��� ���ͷ��ٿ���
//
//		if (m_Age != NULL) {
//
//			delete this->m_Age;
//			this->m_Age = NULL;
//		}
//		//���
//		this->m_Age = new int(*p.m_Age);
//
//		return *this;
//	}
//};
//
//void test01() {
//
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//
//	p3=p2 = p1;
//	
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
//}
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}