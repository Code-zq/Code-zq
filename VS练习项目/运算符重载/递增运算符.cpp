//#include<iostream>
//using namespace std;
//
//
//class MyInteger {
//public:
//	friend ostream& operator<<(ostream& cout,const  MyInteger& myint);
//	friend void test01();
// MyInteger () :m_Num(0) {} 
//
//	//前置运算符递增
// //不返回引用就会操作新的数  MyInteger operator++
//	MyInteger &operator++() {
//
//		m_Num++;
//		//返回自身
//		return *this;
//	}
//
//	//后置运算符递增
//	//返回局部的值的引用 temp 执行完就销毁
//	//占位区分
//	MyInteger operator++(int) {
//		MyInteger temp = *this;
//		//先记录
//		++m_Num;
//		return temp;
//	};
//
//private:
//	int m_Num;
//};
////重载左移运算符
//
//ostream& operator<<(ostream& cout, const MyInteger& myint) {
//
//	cout << "m_Num=" << myint.m_Num;
//	return cout;
// }
//
//
//
// 
//
//void  test01() {
//
//	MyInteger myint;
//	myint.m_Num = 0;
//	cout << ++(++myint)<< endl;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//int main() {
//
//	test01();
//
//}