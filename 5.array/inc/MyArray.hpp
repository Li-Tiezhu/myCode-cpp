#pragma once

#include <iostream>

using namespace std;

template<class T>
class MyArray {
public:
    // 有参构造
    MyArray(int capacity) {
//        cout << "有参构造函数调用" << endl;

        this->m_Capacity = capacity;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Capacity];
    }

    // 拷贝构造
    MyArray(const MyArray& arr) {
//        cout << "拷贝构造函数调用" << endl;

        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Size];

        // 将arr中的数据都拷贝过来
        for (int i = 0; i < this->m_Size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    // operator=防止浅拷贝的问题
    MyArray& operator=(const MyArray& arr) {
//        cout << "=构造函数调用" << endl;

        // 如果原来有数据，先把原来的数据都删除，可能存在两个大小不同的问题，一次一定要先清空
        if (this->pAddress != NULL) {
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_Capacity=0;
            this->m_Size=0;
        }

        // 深拷贝
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];
        for(int i=0; i < this->m_Size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }

        return *this;
    }

    void append(const T& val) {
        if (this->m_Size == this->m_Capacity)
            return;
        this->pAddress[this->m_Size] = val;
        this->m_Size++;
    }

    void pop() {
        if (this->m_Size == 0)
            return;
        this->m_Size--;
    }

    T& operator[] (int index) {
        return this->pAddress[index];
    }

    int size() {
        return this->m_Size;
    }

    int capacity() {
        return this->m_Capacity;
    }

    // 析构函数
    ~MyArray() {
//        cout << "析构函数调用" << endl;

        if (this->pAddress != NULL) {
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
        this->pAddress = new T[this->m_Capacity];
    }

private:
    T *pAddress;  // 数组首地址
    int m_Capacity;  // 数组容量
    int m_Size;  // 数组大小
};
