//#include<iostream>
//using namespace std;
//
//class Person {
//
//public:
//	int m_A;
//	int m_B;
//
//	//不会利用成员函数来重载<<左移运算符 无法实现cout在左侧
//	//p.operator<<(p) 需要对象来调用二个对象
//	//友元函数C++ 中，可以访问类的私有成员和保护成员。
//	// 友元函数并不是类的成员函数，但它可以被声明为类的友元，从而获得对该类的私有和保护成员的访问权限。
//	friend ostream& operator <<(ostream& os, Person &p ) {
//
//		os<< "m_A="<<p.m_A<<" "<<"m_B="<<p.m_B;
//		return os;
//
//	}
//
//	
//};
////&cout 全局只能有一个
//// ostream& operator<<(ostream &cout,Person &p){ //本质  operator <<(cout,p）
////
////	 cout << "m_A=" << p.m_A  <<" " << "m_B=" << p.m_B;
////	 return cout;
////}
//
//int main() {
//
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//
//	//cout << p;//<<endl 链式编程 无返回值
//	cout << p << endl;
//}