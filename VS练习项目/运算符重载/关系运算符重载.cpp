//
//#include<iostream>
//using namespace std;
//
//
//class Person {
//
//public:
//	Person(string name,int age) :m_Name(name),m_Age(age) {};
//
//
//	bool operator==(Person &p) {
//		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age) {
//			return true;
//		}
//		return false;
//
//	}
//
//
//	bool operator!=(Person& p) {
//
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
//			return false;
//		}
//		return true;
//
//	}
//private:
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01() {
//	Person person1("Alice", 30);
//	Person person2("Alice", 30);
//	Person person3("Bob", 25);
//
//
//	if (person1 == person2) {
//		cout << "person1 is equal to person2" << endl;
//	}
//	else {
//		cout << "person1 is not equal to person2" << endl;
//	}
//
//	if (person1 == person3) {
//		cout << "person1 is equal to person3" << endl;
//	}
//	else {
//		cout << "person1 is not equal to person3" << endl;
//	}
//
//	if (person1 != person2) {
//		cout << "person1 is not equal to person2" << endl;
//	}
//	else {
//		
//		cout << "person1 is equal to person2" << endl;
//	}
//}
//
//
//int main() {
//	test01();
//
//	system("pause");
//		return 0;
//}