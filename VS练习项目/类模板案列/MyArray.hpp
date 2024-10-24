#pragma once
#include <iostream>
#include <stdexcept> // for std::out_of_range
using namespace std;

template <class T>
class MyArray {
public:
    // 有参构造 参数 容量
    MyArray(int capacity){
        
        this->m_Capacity = capacity;
        this->m_Size =0;
        pAddress = new T[this->m_Capacity];


           }

    // 拷贝构造函数
    MyArray(const MyArray& arr) {
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];
        //如果T为对象 而且还包含指针 必须重载=
        // 将arr的数据都拷贝过来
        for (int i = 0; i < this->m_Size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    // 赋值运算符重载
    MyArray& operator=(const MyArray& arr) {
        if (this->pAddress！=NULL) { 
            // 先释放原有内存

            delete[] this->pAddress;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }
            // 深拷贝
            this->m_Capacity = arr.m_Capacity;
            this->m_Size = arr.m_Size;
            this->pAddress = new T[arr.m_Capacity];
            for (int i = 0; i < this->m_Size; i++) {
                this->pAddress[i] = arr.pAddress[i];
           
        }
        return *this;
    }

    // 尾插法
    void Push_Back(const T& val) {
        if (this->m_Capacity == this->m_Size) {

            return;
        }
           
        this->pAddress[this->m_Size] = val;
        this->m_Size++;
            
    }

    // 尾删法
    void Pop_Back() {
        if (this->m_Size == 0) {
            cout << "数组为空，无法删除元素。" << endl;
            return;
        }
        this->m_Size--; // 更新大小
    }

    // 通过下标的方式访问数组的元素
    T& operator[](int index) {
        //if (index < 0 || index >= m_Size) {
        //    throw out_of_range("下标越界"); // 抛出异常以处理越界访问
        //}
        return this->pAddress[index];
    }

    // 返回数组的容量
    int getCapacity() {
        return this->m_Capacity;
    }

    // 返回数组大小
    int getSize() {
        return this->m_Size;
    }

    // 析构函数
    ~MyArray() {
        delete[] this->pAddress; // 直接释放内存
    }

private:
    T* pAddress; // 指针指向堆区开辟的真实数组
    int m_Capacity; // 数组容量
    int m_Size; // 数组大小
};