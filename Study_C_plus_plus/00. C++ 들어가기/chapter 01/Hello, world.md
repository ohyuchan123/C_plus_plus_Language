# 🤔 Hello, world!

모든 기초 서적에 빠지지 않는 것이 Hello, world!입니다.

Hello, world!는 짧은 코드에 다음과 같은 내용이 포함되어 있습니다.

- `#include` : 외부 헤더파일을 추가하는 전처리자(preprocessor)
- `<iostream>` : 표준 라이브러리 헤더 파일
- `using std::cout` : namespace 내의 내용을 접근자 없이 사용
- `;` : 하나의 문장을 끝마치는 문자
- `int main(int argc, char* argv[])` : 함수와 매개변수 그리고 모든 프로그램의 진입점인 main 함수
- `std:cout` : 탬플릿 클래스로 구현된 출력스트림의 전역 객체
- `"Hello, world!"` : 문자열 리터럴
- `std::endl` : 줄바꿈과 스트림 버퍼를 지우는 템플릿 함수
- `return` : 함수의 반환값 처리
- `EXIT_SUCCES` 값이 0인 매크로

```cpp
#include <iostream>

using std::cout; // using 선언문 using std::cout;을 사용하면 컴파일러에 std namespace에서 cout을 사용할 것이라고 알려준다
using std::endl;

int main(){
    cout << "Hello World!" << endl;
    // 위에서 using을 통해서 using std::cout를 사용하면 지금 처럼 std를 생략해서 작성할 수 있다!!
    return EXIT_SUCCESS;
}
```

실행 결과

```cpp
Hello, World!
```

하지만 만약 std::cout와 cout의 다른 사용법 사이에 이름 충돌이 있으면 std::cout를 선호한다

## ⇲ <string>

아래 코드는 표준 라이브러리의 `std:string`을 활용하는 예) 입니다

### std:cin

std::cin >> [입력 받을 변수];  
cout의 시프트 연산자 << 이것과ㅏ 반대로 **cin에서는 >> 이족 쉬프트 연산자**를 사용합니다.
**쉬프트 연산자가 나온 후**에는 사용자한테 입력받는 데이터를 저장할 변수를 지정해 줍니다.

```cpp
#include <iostream>
#include <string>

// say what standard-library names we use
using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
    // ask for the person's name
    cout << "Please enter your first name: ";

    // read the name
    string name;
    cin >> name;

    // build the message that we intend to write
    const string greeting = "Hello, " + name + "!";

    // the number of blanks surrounding the greeting
    const int pad = 1;

    // the number of rows and columns to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    // write a blank line to separate the output from the input
    cout << endl;

    // write `rows' rows of output
    // invariant: we have written `r' rows so far
    for (int r = 0; r != rows; ++r) {

        string::size_type c = 0;

        // invariant: we have written `c' characters so far in the current row
        while (c != cols) {

            // is it time to write the greeting?
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {

                // are we on the border?
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }

        cout << endl;
    }

    return 0;
}
```

실행 결과

```cpp
Please enter your first name: yuchan

******************
*                *
* Hello, yuchan! *
*                *
******************
```
