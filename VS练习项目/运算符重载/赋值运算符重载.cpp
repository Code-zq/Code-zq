//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//
//	Person(int age) {
//		//new 动态分配内存 int 返回的int*   
//		// 返回一个指向新分配的 int 类型对象的指针。这个指针指向的内存区域存储了 age 的值
//		m_Age=new int (age);
//	}
//
//
//	int* m_Age;
//
//	//堆区内存重复释放 
//	~Person() {
//		if (m_Age != NULL) {
//			delete m_Age;
//			m_Age = NULL;
//		}
//		
//	}
//
//
//	Person& operator=(Person &p) {
//
//		//应该先判断是否有属性在堆区 先释放再拷贝
//
//		if (m_Age != NULL) {
//
//			delete this->m_Age;
//			this->m_Age = NULL;
//		}
//		//深拷贝
//		this->m_Age = new int(*p.m_Age);
//
//		return *this;
//	}
//};
//
//void test01() {
//
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//
//	p3=p2 = p1;
//	
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}