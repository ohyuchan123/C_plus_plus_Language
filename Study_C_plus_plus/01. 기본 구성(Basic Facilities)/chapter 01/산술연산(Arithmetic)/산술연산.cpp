#include<iostream>

using std::cout;
using std::endl;

int main(){
    int num1 = 10;
    int num2 = 4;

    cout << "+ 연산자에 의한 결괏값은 " << num1 + num2 << "입니다." << endl;
    cout << "- 연산자에 의한 결괏값은 " << num1 - num2 << "입니다." << endl;
    cout << "* 연산자에 의한 결괏값은 " << num1 * num2 << "입니다." << endl;
    cout << "/ 연산자에 의한 결괏값은 " << num1 / num2 << "입니다." << endl;
    cout << "% 연산자에 의한 결괏값은 " << num1 % num2 << "입니다.";

    return 0;
}