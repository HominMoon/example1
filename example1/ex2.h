#pragma once
#include <iostream>

using namespace std;

float sum() {
	float a = 0;
	for (int i = 0; i < 1000; i++) {
		a += 0.1; // 경고문 double에서 float로 잘립니다 -> 무슨말? : 정보의 손실이 일어날 때 경고
	}

	return a;
}

/* 부동소수점 오차가 발생. 100으로 출력되어야 하나 99.999로 출력된다?
* 왜? 0.1을 이진수로 정확하게 나타낼 수 없다!
* 그 결과 우리가 예상한 값과 실제 메모리에 저장된 값이 다르게 나타난다.
* https://grapevine9700.tistory.com/210 -> exception을 제대로 명시하지 않아 오버플로우 발생상황을
* 통제하지 못했다.
*/

void switchex(int a) {
	switch (a)
	{
	default: cout << "A가 아니다";
		break;
	case 'A': cout << "학점은 " << (char)a << endl;
		break;
	}

}

int arrforex() {
	int arr[5] = { 1,2,3,4,5 };
	int k = 0;
	for (int element : arr) {// 배열의 값을 순서대로 불러온다
		k += element;
	}

	return k;
}

void arrex() {
	int arr[3] = { 1,2,3 };
	int k = 0;
	arr[3] = 4; //유효범위를 벗어났다고 표시는 해준다. 근데 실행 가능함
	arr[4] = 5;


	/*for (int i = 0; i < 5; i++) {
		k += arr[i];
	}*/

	cout << "arrex 실행결과: " << k << endl;
}

void rowcolex() {
	int arr_row_len, arr_col_len;
	int arr[3][4] = { //행렬에서 행의 길이는 생략할 수 있으나 열의 길이는 반드시 명시한다.
		{10,20},
		{30,40,50,60},
		{0,0,70,80}
	};

	arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]);
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]);

	cout << "arr component" << endl;

	for (int i = 0; i < arr_row_len; i++) {
		for (int j = 0; j < arr_col_len; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "arr row: " << arr_row_len << endl;
	cout << "arr col: " << arr_col_len << endl << endl;
}

void ptrex() { //이중포인터 사용예
	int x = 7;
	int* ptr = &x; //포인터는 선언과 동시에 초기화 하는것이 좋다. 적어도 사용전에는 초기화해야한다.
	int** pptr = &ptr;

	// + 포인터를 한번에 여러개 선언할 때는 각각 포인터이름 앞에 *를 붙여야한다.
	// ex) int *a, *b;

	cout << **pptr << endl << endl;

}

void ptrarrex() {
	int arr[] = { 10,20,30 };
	int* ptr_arr = arr;

	cout << "arr component using arr name: " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
	cout << "arr component using pointer: " << ptr_arr[0] << " " << ptr_arr[1] << " " << ptr_arr[2] << endl;

	cout << "size of array: " << sizeof(arr) << endl;
	cout << "size of array using pointer: " << sizeof(ptr_arr) << endl << endl;
}

// 알 수 있는것: arr이 배열의 이름이거나 포인터이고 n이 정수일 때,
// arr[n] == *(arr + n)


