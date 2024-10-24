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

// 打印整型数组
void printIntArray(MyArray<int>& arr) {
    for (int i = 0; i < arr.getSize(); i++) {
        cout << arr[i] << endl;
    }
}

// 打印 Person 数组
void printPersonArray(MyArray<Person>& personArr) {
    for (int i = 0; i < personArr.getSize(); i++) {
        cout << "姓名：" << personArr[i].m_Name << " 年龄：" << personArr[i].m_Age << endl;
    }
}


//void test01() {
//    MyArray<int> arr1(5);
//
//    // 利用尾插法向数组中插入数据
//    for (int i = 0; i < 5; i++) {
//        arr1.Push_Back(i);
//    }
//    cout << "arr1的打印输出为：" << endl;
//    printIntArray(arr1);
//
//    // 测试尾删法
//    arr1.Pop_Back();
//    cout << "删除最后一个元素后，arr1的打印输出为：" << endl;
//    printIntArray(arr1);
//
//    // 测试越界访问
//    try {
//        cout << arr1[10] << endl; // 应该抛出异常
//    }
//    catch (const out_of_range& e) {
//        cout << "捕获到异常: " << e.what() << endl;
//    }
//
//    // 测试拷贝构造和赋值
//    MyArray<int> arr2(arr1);
//    cout << "arr2的打印输出为：" << endl;
//    printIntArray(arr2);
//
//    MyArray<int> arr3(10);
//    arr3 = arr1;
//    cout << "arr3的打印输出为：" << endl;
//    printIntArray(arr3);
//}

// 测试 Person 类
void test02() {
    MyArray<Person> pArray(10);

    Person p1("庶务课", 98);
    Person p2("啊完课", 98);
    Person p3("来额课", 98);

    pArray.Push_Back(p1);
    pArray.Push_Back(p2);
    pArray.Push_Back(p3);

    printPersonArray(pArray);
}

int main() {
   // test01(); // 测试整数数组
    test02(); // 测试Person数组
    system("pause");
    return 0;
}