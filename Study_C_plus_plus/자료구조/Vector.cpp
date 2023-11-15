#include <iostream>
#include <vector>
using namespace std;

// 자료구조 클래스
// - vector<T> : 동적 배열 클래스
// - queue<T>
// - stack<T>
// - map<Tkey, Tvalue>

int main(){
    vector<int> myVector;
    for(int i=0;i<10; i++){
        myVector.push_back(i + 1);
        cout << "요소의 개수" << myVector.size() << endl;
        cout << "실제 배열의 길이 : " << myVector.capacity() << endl;
    }

    for(int i=0; i<myVector.size(); i++){
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}