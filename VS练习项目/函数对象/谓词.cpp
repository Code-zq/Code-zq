//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//class GreatFive {
//
//public:
//	bool operator()(int v) {
//
//		return v > 5;
//	}
//};
//void test01() {
//
//	vector<int>v;
//	for (int i = 0; i < 10; i++) {
//
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreatFive());//������������
//	//���ص�����
//
//	if (it == v.end()) {
//
//		cout << "δ�ҵ�" << endl;
//	}
//	else {
//		cout << "�ҵ���" << *it << endl;
//	}
//
//
//}
//
//class MyCompare {
//
//public:
//	//��Ԫν��
//	bool operator ()(int v1, int v2) {
//
//		return v1 > v2;
//	}
//};
//void test02() {
//
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//
//	sort(v.begin(), v.end());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//
//		cout << *it << " ";
//	}
//	cout << endl;
//
//
//	sort(v.begin(), v.end(), MyCompare()); 
//	
//	
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//
//		cout << *it << " ";
//	}
//	cout << endl;
//
//
//}
//int main() {
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}
//
//
