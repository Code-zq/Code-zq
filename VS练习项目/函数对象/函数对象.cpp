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
//	int count;//内部状态
//};
//
//void test01() {
//
//	MyAdd myadd;
//	//像普通函数调用
//	cout << myadd(10, 10) << endl;;
//
//	MyPrint myprint;
//	myprint("hello");
//	myprint("hello");
//	myprint("hello");
//	myprint("hello");
//	//仿函数可以拥有自己得状态
//	cout << myprint.count << endl;
//}
//
//
////函数对象作为参数
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
