//#include<iostream>
//#include<vector>
//#include<algorithm>//标准算法头文件
//using namespace std;
//
//
//void myPrint(int val) {
//
//	cout << val << endl;
//}
//
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
//
////自定义数据类型
//void test02() {
//
//	vector <Person> v1;
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//
//	for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++) {
//		cout << "姓名:" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;
//		cout << it->m_Name << it->m_Age << endl;
//	}
//
//
//}
//
//void test03() {
//	vector <Person*> v1;
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v1.push_back(&p1);//存放地址 取zhi
//	v1.push_back(&p2);
//	v1.push_back(&p3);
//	v1.push_back(&p4);
//	v1.push_back(&p5);
//
//	//存放的指针
//	for (vector<Person*>::iterator it = v1.begin(); it != v1.end(); it++) {
//		//解出来也是指针
//		cout << (*it)->m_Name << (*it)->m_Age << endl;
//
//	}
//}
//
////容器嵌套容器
//
//void test04() {
//
//	vector<vector<int>>v;
//
//	//创建小容器
//
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	vector<int>v5;
//
//	//向小容器添加数据
//
//	for (int i = 0; i < 4; i++) {
//
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//		v5.push_back(i + 5);
//	}
//
//	//将小容器插入大容器
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	v.push_back(v5);
//
//	//通过大容器把所有数据都遍历
//
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//
//		//(*It)  = vector<int>
//
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
//			 
//			cout << *vit <<" ";
//		}
//		cout << endl;
//	}
//	
//}
//void test01() {
//
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//迭代器
//	vector<int>::iterator itBegin = v.begin();//起始迭代器
//
//	vector<int>::iterator itEnd = v.end();//最后一个的后一个
//
//	//1.
//	/*while (itBegin != itEnd) {
//		cout << *itBegin << endl;
//		itBegin++;
//	}*/
//
//
//	
//	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//
//		cout << *it << endl;
//	}
//*/
//
//	for_each(v.begin(), v.end(), myPrint);
//
//}
//int main() {
//	test01();
//	test02();
//	test03();
//	test04();
//	system("pause");
//	return 0;
//}
//
//
