//#include<iostream>
//using namespace std;
//
////加法运算符重载
//
//
//class Person {
//
//public:
//	int m_A;
//	int m_B;
//
//	//通过成员函数重载加号
//	Person operator+(Person& p) {
//
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//
//		return temp;
//	}
//	//Person p3 =p1.Operator（p2）
//
//};
////
//////通过全局函数来进行重载
////
////Person  operator+(Person& p1,Person& p2) {
////
////	Person temp;
////	temp.m_A = p1.m_A = p2.m_A;
////	temp.m_B = p1.m_B = p2.m_B;
////	return temp;
////	//Person p3=operator+(p1,p2)
////}
//
//int main() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	Person p3;
//	p3 = p1 + p2;
//
//	cout << p3.m_A << endl;
//	system("pause");
//}