//#include<iostream>
//#include<deque>
//#include<algorithm>
//using namespace std;
////const 只读迭代器
//void printDeque(const  deque<int>& d) {
//
//	for (deque<int>::const_iterator it=d.begin();it!=d.end();it++) {
//
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//
//	deque<int>d1;
//
//	for (int i = 0; i < 10; i++) {
//
//		d1.push_back(i);
//	}
//	
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
//	//构造
//}
//
//
//void test02() {
//	deque<int>d1;
//
//	for (int i = 0; i < 10; i++) {
//
//		d1.push_back(i);
//	}
//
//	printDeque(d1);
//
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	deque<int>d3;
//	d3.assign(d2.begin(),d2.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//
//}
//
//void test03() {
//	deque<int>d1;
//
//	for (int i = 0; i < 10; i++) {
//
//		d1.push_back(i);
//	}
//	//deque没有容量的概念
//	if (d1.empty()) {
//
//		cout << "d1为空" << endl;
//	}
//	else {
//		cout << "d1不为空" << endl;
//		cout << "d1的大小为：" << d1.size() << endl;
//	}
//
//	//重新指定大小
//	d1.resize(17, 1);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
//
//
//}
//
//void test04() {
//
//	deque<int>d1;
//
//	d1.push_back(10);
//	d1.push_back(20);
//
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printDeque(d1);
//
//	d1.pop_front();
//
//
//	printDeque(d1);
//	d1.pop_back();
//
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 100);
//	printDeque(d1);
//
//
//	d1.insert(d1.begin(), 2, 1000);
//	printDeque(d1);
//
//	//按照区间来进行插入
//
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//
//	printDeque(d1);
//}
//
//void test05() {
//
//	deque<int>d1;
//
//	d1.push_back(10);
//	d1.push_back(20);
//
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//	//删除
//	deque<int>::iterator it = d1.begin();
//
//	it++;
//	d1.erase(it);
//
//	printDeque(d1);
//
//	//清空
//	//d1.erase(d1.begin(), d1.end());
//	d1.clear();
//	printDeque(d1);
//}
//
//void test06() {
//
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	for (int i = 0; i < d.size(); i++) {
//
//		cout << d[i] << " ";
//	}
//	cout<< endl;
//
//	for (int i = 0; i < d.size(); i++) {
//
//		cout << d.at(i)<< " ";
//	}
//	cout << endl;
//
//	cout << "第一个元素：" << d.front() << endl;
//	cout << "最后一个元素：" << d.back() << endl;
//}
//
//void test07() {
//
//	deque<int>d;
//
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//
//
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//
//	printDeque(d);
//
//	//排序从小到大升序 a
//	//对于支持随机访问的迭代器的容器 都可以利用sort算法直接
//
//	sort(d.begin(), d.end());
//	cout << "排序后" << endl;
//
//	printDeque(d);
//}
//int main() {
//
//	test01();
//	test02();
//	test03();
//	test04();
//	test05();
//	test06();
//	test07();
//	system("pause");
//	return 0;
//}
//
//
