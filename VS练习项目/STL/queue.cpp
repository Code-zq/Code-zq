//#include<iostream>
//#include<queue>
//using namespace std;
//
//class Person {
//
//public:
//
//	Person(string name, int age) {
//
//		this->m_Name = name;
//		this->m_Age = age;
//		
//	}
//
//	string m_Name;
//	int m_Age;
//
//};
//
//void test01() {
//
//	queue<Person>q;
//
//
//	Person p1("1",10);
//	Person p2("2",20);
//	Person p3("3",30);
//	Person p4("4",40);
//
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	cout << "队列得大小：" << q.size() << endl;
//	
//	while (!q.empty()) {
//
//		cout << "队头元素---姓名：" << q.front().m_Name << "年龄： " << q.front().m_Age << endl;
//		
//		cout << "队尾元素---姓名：" << q.front().m_Name << "年龄： " << q.front().m_Age << endl;
//		q.pop();
//	}
//
//	
//
//	cout << "队列的大小：" << q.size()<<endl;
//}
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//
