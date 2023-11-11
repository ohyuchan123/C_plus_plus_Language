#include <iostream>
using namespace std;

// 배열의 요소를 삽입하는 함수 만들기
// 1, 2, 3, 4, 5 <- 87를 3번째 자리에 삽입
// 결과 : 1 , 2, 87, 3, 4, 5

// 배열의 단점
// 배열은 요소를 추가/삭제하는 것이 어렵다!

void Insert(int** pArr, int length, int index, int value);

int main(){
    int* arr = new int[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    cout << "<삽인 전>" << endl;
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    Insert(&arr, 5, 2, 87);

    cout << "<삽인 전>" << endl;
    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // 동적 할당 해제
}

void Insert(int **pArr, int length, int index, int value)
{
    int* tempArr = *pArr;
    int* newArr = new int[++length];
    for(int i=0; i<length; i++){
        if(i < index){
            newArr[i] = tempArr[i];
        }else if(i == index){
            newArr[i] = value;
        }else{
            newArr[i] = tempArr[i - 1];
        }
    }
    
    delete[] tempArr;
    *pArr = newArr;
}
