#include<iostream>
using namespace std;
//��������ģ��
template<class T>
void mySwap(T& a, T& b){

	T temp = a;
	a = b;
	b = temp;
}

//ʵ��ͨ�ö����������
template<class T>
void mySort(T arr[],int len) {

	for (int i = 0; i < len; i++) {

		int max = i;//�϶������ֵ�±�

		for (int j = i + 1; j < len; j++) {

			if (arr[max] < arr[j]) {

				max = j;//�������ֵ�±�
			}
		}
		if (max != i) {

			//����max��i��Ԫ��
			mySwap(arr[max], arr[i]);
		}
	}
}

//�ṩ��ӡ�����ģ��
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

