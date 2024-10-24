#include<iostream>
using namespace std;
//交换函数模板
template<class T>
void mySwap(T& a, T& b){

	T temp = a;
	a = b;
	b = temp;
}

//实现通用对数组的排序
template<class T>
void mySort(T arr[],int len) {

	for (int i = 0; i < len; i++) {

		int max = i;//认定的最大值下标

		for (int j = i + 1; j < len; j++) {

			if (arr[max] < arr[j]) {

				max = j;//更新最大值下表
			}
		}
		if (max != i) {

			//交换max和i的元素
			mySwap(arr[max], arr[i]);
		}
	}
}

//提供打印数组的模板
template<class T>
void printArray(T arr[], int len) {

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01() {

	char charArr[] = "badcfe";
	int intArr[] = { 7,5,1,3,9,2,4,6,8 };
	int len = sizeof(charArr) / sizeof(char);
	int num = sizeof(intArr) / sizeof(int);
	mySort(charArr, len);
	printArray(charArr, len);
	mySort(intArr, num);
	printArray(intArr, num);
}
int main() {
	test01();

	system("pause");
	return 0;
}

