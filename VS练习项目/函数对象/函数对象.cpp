//#include<iostream>
//using namespace std;
//
//class MyAdd {
//
//public:
//	int operator()(int v1, int v2) {
//
//		return v1 + v2;
//	}
//};
//
//class MyPrint {
//
//public:
//	MyPrint() {
//
//		this->count = 0;
//	}
//	void operator()(string text) {
//		cout << text << endl;
//		this->count++;
//	}
//
//	int count;//�ڲ�״̬
//};
//
//void test01() {
//
//	MyAdd myadd;
//	//����ͨ��������
//	cout << myadd(10, 10) << endl;;
//
//	MyPrint myprint;
//	myprint("hello");
//	myprint("hello");
//	myprint("hello");
//	myprint("hello");
//	//�º�������ӵ���Լ���״̬
//	cout << myprint.count << endl;
//}
//
//
////����������Ϊ����
//void doPrint(MyPrint& mp, string text) {
//
//	mp(text);
//}
//
//void test02() {
//
//	MyPrint myprint;
//	doPrint(myprint, "1111");
//}
//
//int main() {
//	test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}
//
//
