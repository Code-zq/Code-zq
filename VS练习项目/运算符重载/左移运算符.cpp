//#include<iostream>
//using namespace std;
//
//class Person {
//
//public:
//	int m_A;
//	int m_B;
//
//	//�������ó�Ա����������<<��������� �޷�ʵ��cout�����
//	//p.operator<<(p) ��Ҫ���������ö�������
//	//��Ԫ����C++ �У����Է������˽�г�Ա�ͱ�����Ա��
//	// ��Ԫ������������ĳ�Ա�������������Ա�����Ϊ�����Ԫ���Ӷ���öԸ����˽�кͱ�����Ա�ķ���Ȩ�ޡ�
//	friend ostream& operator <<(ostream& os, Person &p ) {
//
//		os<< "m_A="<<p.m_A<<" "<<"m_B="<<p.m_B;
//		return os;
//
//	}
//
//	
//};
////&cout ȫ��ֻ����һ��
//// ostream& operator<<(ostream &cout,Person &p){ //����  operator <<(cout,p��
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
//	//cout << p;//<<endl ��ʽ��� �޷���ֵ
//	cout << p << endl;
//}