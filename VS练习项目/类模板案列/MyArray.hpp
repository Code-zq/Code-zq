#pragma once
#include <iostream>
#include <stdexcept> // for std::out_of_range
using namespace std;

template <class T>
class MyArray {
public:
    // �вι��� ���� ����
    MyArray(int capacity){
        
        this->m_Capacity = capacity;
        this->m_Size =0;
        pAddress = new T[this->m_Capacity];


           }

    // �������캯��
    MyArray(const MyArray& arr) {
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];
        //���TΪ���� ���һ�����ָ�� ��������=
        // ��arr�����ݶ���������
        for (int i = 0; i < this->m_Size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    // ��ֵ���������
    MyArray& operator=(const MyArray& arr) {
        if (this->pAddress��=NULL) { 
            // ���ͷ�ԭ���ڴ�

            delete[] this->pAddress;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }
            // ���
            this->m_Capacity = arr.m_Capacity;
            this->m_Size = arr.m_Size;
            this->pAddress = new T[arr.m_Capacity];
            for (int i = 0; i < this->m_Size; i++) {
                this->pAddress[i] = arr.pAddress[i];
           
        }
        return *this;
    }

    // β�巨
    void Push_Back(const T& val) {
        if (this->m_Capacity == this->m_Size) {

            return;
        }
           
        this->pAddress[this->m_Size] = val;
        this->m_Size++;
            
    }

    // βɾ��
    void Pop_Back() {
        if (this->m_Size == 0) {
            cout << "����Ϊ�գ��޷�ɾ��Ԫ�ء�" << endl;
            return;
        }
        this->m_Size--; // ���´�С
    }

    // ͨ���±�ķ�ʽ���������Ԫ��
    T& operator[](int index) {
        //if (index < 0 || index >= m_Size) {
        //    throw out_of_range("�±�Խ��"); // �׳��쳣�Դ���Խ�����
        //}
        return this->pAddress[index];
    }

    // �������������
    int getCapacity() {
        return this->m_Capacity;
    }

    // ���������С
    int getSize() {
        return this->m_Size;
    }

    // ��������
    ~MyArray() {
        delete[] this->pAddress; // ֱ���ͷ��ڴ�
    }

private:
    T* pAddress; // ָ��ָ��������ٵ���ʵ����
    int m_Capacity; // ��������
    int m_Size; // �����С
};