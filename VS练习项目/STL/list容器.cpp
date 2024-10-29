//#include<iostream>
//#include<list>
//using namespace std;
//
//
//void printList(const list<int>& L) {
//
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//bool myCompare(int v1, int v2) {
//
//	return v1 > v2;
//}
//void test01() {
//
//	list<int>L1;//默认构造
//
//	L1.push_back(10);
//	L1.push_back(10);
//	L1.push_back(10);
//	L1.push_back(10);
//
//	printList(L1);
//
//	//区间方式构造
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	list<int>L3;
//	L3 = L1; 
//	printList(L2);
//
//
//	list<int>L4(10, 100);
//	printList(L4);
//
//}
//
//void test02() {
//
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(10);
//	L1.push_back(10);
//	L1.push_back(10);
//
//
//	list<int>L2;
//	L2.assign(10, 100);
//
//	cout << "交换前：" << endl;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//
//	cout << "交换后：" << endl;
//	printList(L1);
//	printList(L2);
//
//
//}
//
//
//void test03() {
//
//
//
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(10);
//	L1.push_back(10);
//	L1.push_back(10);
//
//	if (L1.empty()) {
//
//		cout << "L1为空" << endl;
//	}
//	else {
//
//		cout << "L1不为空" << endl;
//		cout << "元素个数为： " << L1.size() << endl;
//	}
//
//	//重新指定大小
//	L1.resize(10, 1000);
//	printList(L1);
//
//	L1.resize(2);
//	printList(L1);
//
//}
//
//void test04() {
//
//
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//
//
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//
//	printList(L1);
//	
//
//	//尾删
//	L1.pop_back();
//	printList(L1);
//
//
//	//头删
//	L1.pop_front();
//	printList(L1);
//
//
//	//插入
//	list<int>::iterator it = L1.begin();
//	L1.insert(++it, 1000);
//	printList(L1);
//
//	//非连续空间只能++重载
//	//it = L1.begin(); 200 100 10 20 // 200 1000 100 10 20 //200 1000 10 20
//	L1.erase(++it);
//	printList(L1);
//
//	//移除所有匹配的值
//	L1.push_back(10000);
//	L1.push_back(10000);
//	cout << "元素个数为： " << L1.size() << endl;
//	printList(L1);
//	
//	L1.remove(10000);
//	cout << "元素个数为： " << L1.size() << endl;
//	printList(L1);
//
//	cout << L1.front() << endl;
//	cout << L1.back() << endl;
//}
//
//void test05() {
//
//
//
//	list<int>L1;
//
//	L1.push_back(20);
//	L1.push_back(40);
//	L1.push_back(30);
//	L1.push_back(50);
//	L1.push_back(10);
//
//	cout << "反转前:" << endl;
//
//	printList(L1);
//	L1.reverse();
//	cout << "反转后:" << endl;
//
//	printList(L1);
//	cout << "排序后" << endl;
//	L1.sort();
//	//sort(L1.begin(), L1.end());
//	//不支持随机访问迭代器的容器 不可以用标准算法
//	//内部提供成员算法 
//	printList(L1);
//	//仿函数 降序
//	L1.sort(myCompare);
//	printList(L1);
//	}
//int main() {
//
//	test01();
//	test02();
//	test03();
//	test04();
//	test05();
//	system("pause");
//	return 0;
//}
//
//
