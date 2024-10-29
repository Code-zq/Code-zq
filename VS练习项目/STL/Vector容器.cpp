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
//	//ͨ�����乹��
//	vector <int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n��elem����
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
//	//��ֵ���� operator=
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
//		cout << "v1Ϊ��" << endl;
//
//	}
//	else {
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ��" <<v1.capacity()<< endl;
//		cout << "v1�Ĵ�СΪ��" <<v1.size()<< endl;
//
//	}
//
//	//����ָ����С
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
//	//βɾ
//	v.pop_back();
//	printVector(v);
//
//	//����
//	v.insert(v.begin(), 100);
//	printVector(v);
//
//	v.insert(v.begin(), 2, 1000);
//	printVector(v);
//
//	//ɾ��
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
//	//����[]�����������Ԫ��
//
//	for (int i = 0; i < v1.size(); i++) {
//
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	//����at��ʽ������Ԫ��
//
//	for (int i = 0; i < v1.size(); i++) {
//
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;
//
//	cout << "���һ��Ԫ��Ϊ��" << v1.back() << endl;
//}
//
//void test06() {
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) {
//
//		v1.push_back(i);
//	}
//	cout << "����ǰ��" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--) {
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "������" << endl;
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
//	cout << "v��������" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	v.resize(3);
//
//
//	cout << "v��������" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	//�����ڴ�
//	vector<int>(v).swap(v);
//	//��������ȥ������Ŀռ� �������Զ�����
//
//	cout << "v��������" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//}
//
//
//void test08() {
//	//Ԥ���ռ�reserve ����ʼ��
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
//	cout << "���ٴ���:" << num << endl;
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
