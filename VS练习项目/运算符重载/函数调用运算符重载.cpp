
#include<iostream>
using namespace std;


class Myprint {
public:

	void operator()(string text) {

		cout << text << endl;
	}


};

class Add {
public:

	int operator()(int num1,int num2) {

		return num1 + num2;
	}
};
void myprint01(string text) {

	cout << text << endl;
}

void test01() {

	Myprint myprint;
	myprint("hello");//�º���
	myprint01("hello 1");//����

	Add add;
	int ret=add(1, 2);
	cout << ret << endl;

	//������������ 
	cout << Add()(1, 22) << endl;
}
int main() {
	test01();

	system("pause");
	return 0;
}