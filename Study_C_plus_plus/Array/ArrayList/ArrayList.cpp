#include <iostream>
#include "ArrayList.h"
using namespace std;

int main(){
    ArrayList<int> arraylist;
    for(int i=0;i<10;i++){
        arrayList.Add(i+1);
    }

    for(int i=0; i< arrayList.GetCount(); i++){
        cout << arrayList[i] << " ";
    }

    return 0;
}