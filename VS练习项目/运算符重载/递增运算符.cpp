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
//	//ǰ�����������
// //���������þͻ�����µ���  MyInteger operator++
//	MyInteger &operator++() {
//
//		m_Num++;
//		//��������
//		return *this;
//	}
//
//	//�������������
//	//���ؾֲ���ֵ������ temp ִ���������
//	//ռλ����
//	MyInteger operator++(int) {
//		MyInteger temp = *this;
//		//�ȼ�¼
//		++m_Num;
//		return temp;
//	};
//
//private:
//	int m_Num;
//};
////�������������
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