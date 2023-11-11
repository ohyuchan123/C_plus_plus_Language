#pragma once
#include<iostream>
using namespace std;

template<typename T>
class ArrayList
{
    private:
        T* data;
    private:
        int count;
        int capacity;
    public:
        void Add(const T& item);
        T& operator[](int index); //[] 첨자 연산자 오버로딩
    public:
        int GetCount();
        int GetCapacity();
    public:
        ArrayList();
        ~ArrayList();
};

// 탬플린 클래스의 메서드는
// 반드시 헤더 파일에 정의해야 한다!!
template <typename T>
inline void ArrayList<T>::Add(const T &item)
{
    if(count >= capacity){
        capacity <<= 1;
        T* newArr = new T[capacity];
        memcpy(newArr, sizeof(T)*capacity, data, sizeof(T)*count);
        delete[] data;
        data = newArr;
    }
    data[count++] = item;
}

template <typename T>
T &ArrayList<T>::operator[](int index)
{
    if(index >= count || index < 0){
        cout << "index의 범위가 벗어났습니다.(index : " << index << ")" << endl;
        exit(1);
    }
    return data[index];
    // TODO: 여기에 return 문을 삽입합니다.
}

template <typename T>
inline int ArrayList<T>::GetCount()
{
    return count;
}

template <typename T>
inline int ArrayList<T>::GetCapacity()
{
    return capacity;
}

template <typename T>
ArrayList<T>::ArrayList()
    : count(0), capacity(4)
{
    {
        data = new T[capacity];
    }
}

template <typename T>
ArrayList<T>::~ArrayList()
{
    if(data != nullptr){
        delete[] data;
        data = nullptr;
    }
}
