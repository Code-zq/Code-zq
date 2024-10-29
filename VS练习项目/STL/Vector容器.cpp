//#include<iostream>
//#include<vector>
//using namespace std;
//
//void printVector(vector<int>&v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//
//		cout << *it<<" ";
//
//	}
//	cout << endl;
//	}
//
//void test01() {
//
//	vector<int>v1;
//
//	for (int i =0; i < 10; i++) {
//
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//通过区间构造
//	vector <int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n个elem构造
//	vector<int>v3(10, 100);
//	printVector(v3);
//
//	vector<int>v4(v3);
//	printVector(v4);
//}
//
//void test02() {
//	vector<int>v1;
//
//	for (int i = 0; i < 10; i++) {
//
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	//赋值操作 operator=
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//
//void test03() {
//	vector<int>v1;
//
//	for (int i = 0; i < 10; i++) {
//
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	if (v1.empty()) {
//
//		cout << "v1为空" << endl;
//
//	}
//	else {
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为：" <<v1.capacity()<< endl;
//		cout << "v1的大小为：" <<v1.size()<< endl;
//
//	}
//
//	//重新指定大小
//	v1.resize(15);
//	printVector(v1);
//
//	v1.resize(16, 100);
//	printVector(v1);
//
//	v1.resize(5);
//	printVector(v1);
//
//}
//
//void test04() {
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	printVector(v);
//	//尾删
//	v.pop_back();
//	printVector(v);
//
//	//插入
//	v.insert(v.begin(), 100);
//	printVector(v);
//
//	v.insert(v.begin(), 2, 1000);
//	printVector(v);
//
//	//删除
//	v.erase(v.begin());
//	printVector(v);
//
//	//v.erase(v.begin(), v.end());
//	v.clear();
//	printVector(v);
//}
//
//void test05() {
//
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) {
//
//		v1.push_back(i);
//	}
//
//	//利用[]来访问数组的元素
//
//	for (int i = 0; i < v1.size(); i++) {
//
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	//利用at方式来访问元素
//
//	for (int i = 0; i < v1.size(); i++) {
//
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "第一个元素为：" << v1.front() << endl;
//
//	cout << "最后一个元素为：" << v1.back() << endl;
//}
//
//void test06() {
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) {
//
//		v1.push_back(i);
//	}
//	cout << "交换前：" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--) {
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "交换后" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//void test07() {
//
//	vector<int>v;
//	for (int i = 0; i < 10000; i++) {
//
//		v.push_back(i);
//	}
//
//	cout << "v的容量：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);
//
//
//	cout << "v的容量：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	//收缩内存
//	vector<int>(v).swap(v);
//	//匿名对象去交换大的空间 结束完自动销毁
//
//	cout << "v的容量：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//}
//
//
//void test08() {
//	//预留空间reserve 不初始化
//
//	vector<int>v;
//	v.reserve(100000);
//	int* p = NULL;
//	int num = 0;
//	for (int i = 0; i < 100000; i++) {
//
//		v.push_back(i);
//		if (p != &v[0]) {
//			p = &v[0];
//			num++;
//		}
//	}
//	
//	cout << "开辟次数:" << num << endl;
//
//
//}
//int main() { 
//	test01();
//	test02();
//	test03();
//	test04();
//	test05();
//	test06();
//	test07();
//	test08();
//	system("pause");
//	return 0;
//}
//
//
