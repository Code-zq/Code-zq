//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//
//void test01() {
//	//1.包含头文件
//
//	//2创建流对象
//
//	ifstream ifs;
//
//	//3.打开文件 并判断是否打开成功
//
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open()) {
//
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//4.读数据
//
//	//第一种
//
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf) {
//	//	cout << buf << endl;
//	//}
//	
//
//	////第二种
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf,sizeof(buf))) {
//	//	cout << buf << endl;
//
//	// }
//
//	//第三种
//	/*
//	string buf;
//
//	while ( getline(ifs, buf)) {
//		cout << buf << endl;
//	}*/
//
//	//第四种
//
//	char c;
//	while ((c = ifs.get()) != EOF) {
//		//第四种循环里面别加endl，因为他会自己读回车符，可以在循环外写一个cout << endl;
//		cout << c;
//	}
//	cout<<endl;
//
//	//5.关闭文件
//
//	ifs.close();
//}
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}