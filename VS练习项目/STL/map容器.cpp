//#include<iostream>
//#include<map>
//using namespace std;
//
//
//void printMap(map<int, int>& m) {
//
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//
//		cout << " key = " << (*it).first << " value= " << it->second << endl;
//	}
//	cout << endl;
//}
//void test01() {
//
//	map<int, int>m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	m.insert(make_pair(5, 50));
//
//	m.insert(map<int, int>::value_type(6, 60));
//
//	m[8] = 80;//不建议插入 用途可以利用key来访问val
//	cout << m[7] << endl;//自动创建出7
//	
//
//
//	printMap(m);
//
//	map<int, int>m1(m);
//	m1.erase(m1.begin());
//
//	m1.erase(2);//按照key删除
//	printMap(m1);
//
//	map<int, int>m2;
//	m2 = m1;
//	//m2.erase(m2.begin(), m2.end());
//	m2.clear();
//	printMap(m2);
//}
//
//void test02() {
//	map<int, int>m;
//
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//
//	map<int, int>::iterator pos = m.find(3);
//	//find返回得是迭代器 没找到就返回end（）
//	if (pos != m.end()) {
//
//		cout << "查找了元素 key =" << (*pos).first << "value: " << pos->second << endl;
//	}
//	else {
//		cout << "未找到元素" << endl;
//	}
//	//不允许重复key 0 or 1
//	int num = m.count(3);
//	cout << "num= " <<num<< endl;
//	}
//
//
//class myCompare {
//
//public:
//
//	bool operator()(int v1,int v2)const {
//
//		return v1 > v2;
//	}
//};
//void test03() {
//	map<int, int,myCompare>m;
//
//	//插进去就自动排序了
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(4, 40));
//	m.insert(make_pair(3, 30));
//
//	//自动排序 小到大
//	//printMap(m);
//
//	cout << "-------" << endl;
//
//	for (map<int, int,myCompare>::iterator it = m.begin(); it != m.end(); it++) {
//
//		cout << " key =  " << it->first << " value=  " << (*it).second << endl;
//	}
//
//
//	
//}
//int main() {
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}
//
//
