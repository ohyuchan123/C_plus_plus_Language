#include <iostream>
#include <queue>
using namespace std;

// 자료구조 클래스
// - vector<T> : 동적 배열 클래스
// - queue<T>
// - stack<T>
// - map<Tkey, Tvalue>

int main(){
    queue<char> myQueue;
    for(char c='A'; c<='D'; c++){
        myQueue.push(c);
    }

    while(myQueue.size() > 0){
        cout << "꺼낸 요소 : " << myQueue.front() << endl;
        myQueue.pop(); 
    }

    return 0;
}