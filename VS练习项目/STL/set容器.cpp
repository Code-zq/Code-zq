//#include<iostream>
//#include<set>
//#include<algorithm>
//using namespace std;
//class myCompare {
//public:
//	//chongzai() 仿函数也是一个类型
//	bool operator()(int v1, int v2)const {
//		return v1 > v2;
//	}
//
//};
//
//
//void printSet(set<int>& s) {
//
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
//
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//
//void printSet(multiset<int>& ms) {
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
//
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	//自动排序 不能插入重复的数据
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	set<int>s3;
//	s3 = s1;
//	printSet(s3);
//
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	//重载版本
//	s1.erase(30);
//	printSet(s1);
//
//	//清空
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}
//
//void test02() {
//	//查找 找不到返回set.end（） count
//
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int>::iterator pos =s1.find(30);
//
//	if (pos != s1.end()) {
//
//		cout << "找到元素 ：" << *pos << endl;
//	}
//	else {
//		cout << "未找到元素" << endl;
//	}
//
//	int num = s1.count(3);
//	//0 or 1
//	cout << num << endl;
//	printSet(s1);
//
//	cout << "排序后" << endl;
//	
//}
//void test03() {
//
//	set<int>s1;
//
//	
//
//	pair<set<int>::iterator, bool> ret = s1.insert(10);
//
//	if (ret.second) {
//		cout << "第一次插入成功" << endl;
//	}
//	else {
//		cout << "第一次插入失败" << endl;
//	}
//	s1.insert(10);
//
// ret = s1.insert(10);
//
//	if (ret.second) {
//		cout << "第二次插入成功" << endl;
//	}
//	else {
//		cout << "第二次插入失败" << endl;
//	}
//
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//	printSet(ms);
//}
//
//void test04() {
//
//	set<int,myCompare>s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	for (set<int,myCompare>::iterator it = s1.begin(); it != s1.end(); it++) {
//
//		cout << *it << " ";
//	}
//	cout << endl;
//
//
//}
//class Person {
//public:
//	Person(string name, int age) {
//		this->m_Age = age;
//		this->m_Name = name;
//
//	}
//
//	string m_Name;
//	int m_Age;
//
//};
//
//class myCompare1 {
//public:
//	bool operator()(const Person& p1, const Person& p2)const {
//
//		return p1.m_Age > p2.m_Age;
//	}
//};
//void test05() {
//	
//	set<Person,myCompare1>s1;
//	Person p1("1", 20);
//	Person p2("2", 30);
//	Person p3("3", 10);
//	Person p4("4", 40);
//
//	s1.insert(p1);
//	s1.insert(p2);
//	s1.insert(p3);
//	s1.insert(p4);
//
//	for (set<Person, myCompare1>::iterator it = s1.begin(); it != s1.end(); it++) {
//
//		cout << "姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;
//	}
//	
//
//}
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
