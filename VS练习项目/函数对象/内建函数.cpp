#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

using namespace std;


void test01() {
	negate<int>n;
	n(50);
	cout << n(50) << endl;;

	plus<int>p;
	cout << p(10, 10) << endl;;


}
void test02() {
	
	vector<int>v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {

		cout << *it << " ";
	}
	cout << endl;

	//内建函数对象
	sort(v.begin(), v.end(),greater<int>());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {

		cout << *it << " ";
	}
	cout << endl;
}


void test03() {

	vector<bool>v;

	v.push_back(true);
	v.push_back(false);
	v.push_back(false);
	v.push_back(true);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {

		cout << *it << " ";
	}
	cout << endl;


	vector<bool>v1;
	v1.resize(v.size());

	//转换过程中进行运算

	transform(v.begin(), v.end(), v1.begin(),  logical_not<bool>());

	for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++) {

		cout << *it << " ";
	}
	cout << endl;


}
int main() {
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}


