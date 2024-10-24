#include <iostream>
#include "MyArray.hpp"

using namespace std;

class Person {
public:
   
    Person() {};
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

// ��ӡ��������
void printIntArray(MyArray<int>& arr) {
    for (int i = 0; i < arr.getSize(); i++) {
        cout << arr[i] << endl;
    }
}

// ��ӡ Person ����
void printPersonArray(MyArray<Person>& personArr) {
    for (int i = 0; i < personArr.getSize(); i++) {
        cout << "������" << personArr[i].m_Name << " ���䣺" << personArr[i].m_Age << endl;
    }
}


//void test01() {
//    MyArray<int> arr1(5);
//
//    // ����β�巨�������в�������
//    for (int i = 0; i < 5; i++) {
//        arr1.Push_Back(i);
//    }
//    cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
//    printIntArray(arr1);
//
//    // ����βɾ��
//    arr1.Pop_Back();
//    cout << "ɾ�����һ��Ԫ�غ�arr1�Ĵ�ӡ���Ϊ��" << endl;
//    printIntArray(arr1);
//
//    // ����Խ�����
//    try {
//        cout << arr1[10] << endl; // Ӧ���׳��쳣
//    }
//    catch (const out_of_range& e) {
//        cout << "�����쳣: " << e.what() << endl;
//    }
//
//    // ���Կ�������͸�ֵ
//    MyArray<int> arr2(arr1);
//    cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
//    printIntArray(arr2);
//
//    MyArray<int> arr3(10);
//    arr3 = arr1;
//    cout << "arr3�Ĵ�ӡ���Ϊ��" << endl;
//    printIntArray(arr3);
//}

// ���� Person ��
void test02() {
    MyArray<Person> pArray(10);

    Person p1("�����", 98);
    Person p2("�����", 98);
    Person p3("�����", 98);

    pArray.Push_Back(p1);
    pArray.Push_Back(p2);
    pArray.Push_Back(p3);

    printPersonArray(pArray);
}

int main() {
   // test01(); // ������������
    test02(); // ����Person����
    system("pause");
    return 0;
}