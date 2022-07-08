#include "ex2.h"
#include "ex3.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main(int argc, char* argv[]) {
	int age;
	float k = 0;

	int a = 12;
	int b = 7;

	int height = 180; // 리터럴 상수의 예시 여기서 180을 리터럴이라고 한다. 변하지 않는 값
	const int birthYear = 98; // const로 심볼릭 상수를 지정할 수 있다.
	/*const가 매크로(define)보다 좋은점:
	1. 타입을 명시적으로 지정할 수 있음
	2. 구조체 등에 사용할 수 있음 -> 복잡한 사용자정의 타입에도 사용가능
	3. 특정 함수나 파일에만 사용할 수 있도록 할 수 있음 ->
	define은 정의해놓으면 범위지정이 안되므로*/

	/*cout << "나이를 입력: ";
	cin >> age;
	cout << "나이는 " << age << "입니다." << endl;*/ 


	/*endl의 동작:
	출력 후 개행이 이루어진다. 이때 버퍼가 비워진다
	버퍼가 비워진다는 것이 std:cout에서의 출력이다*/

	cout << sum() << endl; //부동소수점 오차에 관한 예시 ex2.h

	a %= b; // 대입연산자 中 나머지연산 12 % 7 = 5 를 a에 대입 (a = a % b)
	cout << a << endl;

	// 실행결과 

	switchex('A'); // switch문 예시 ex3.h
	cout << arrforex() << endl; // 범위기반 for문 예시 ex3.h

	//goto 문은 왜 쓰면 안될까? -> 프로그램의 자연스러운 흐름을 해칠 가능성이 있다.
	// 또한 실행을 복잡하게해 식별하기 어려운 스파게티 코드를 탄생시킬 수 있다.

	//arrex();

	rowcolex();

	ptrex();

	ptrarrex();

	//dynamicEx();

	//stringEx();

	//stringEx2();

	structEx();

	structEx2();

	structEx3();

	cout << "1에서 10까지의 합: " << recursiveEx(10) << endl << endl;

	return(0);
}