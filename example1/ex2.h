#pragma once
#include <iostream>

using namespace std;

float sum() {
	float a = 0;
	for (int i = 0; i < 1000; i++) {
		a += 0.1; // ��� double���� float�� �߸��ϴ� -> ������? : ������ �ս��� �Ͼ �� ���
	}

	return a;
}

/* �ε��Ҽ��� ������ �߻�. 100���� ��µǾ�� �ϳ� 99.999�� ��µȴ�?
* ��? 0.1�� �������� ��Ȯ�ϰ� ��Ÿ�� �� ����!
* �� ��� �츮�� ������ ���� ���� �޸𸮿� ����� ���� �ٸ��� ��Ÿ����.
* https://grapevine9700.tistory.com/210 -> exception�� ����� ������� �ʾ� �����÷ο� �߻���Ȳ��
* �������� ���ߴ�.
*/

void switchex(int a) {
	switch (a)
	{
	default: cout << "A�� �ƴϴ�";
		break;
	case 'A': cout << "������ " << (char)a << endl;
		break;
	}

}

int arrforex() {
	int arr[5] = { 1,2,3,4,5 };
	int k = 0;
	for (int element : arr) {// �迭�� ���� ������� �ҷ��´�
		k += element;
	}

	return k;
}

void arrex() {
	int arr[3] = { 1,2,3 };
	int k = 0;
	arr[3] = 4; //��ȿ������ ����ٰ� ǥ�ô� ���ش�. �ٵ� ���� ������
	arr[4] = 5;


	/*for (int i = 0; i < 5; i++) {
		k += arr[i];
	}*/

	cout << "arrex ������: " << k << endl;
}

void rowcolex() {
	int arr_row_len, arr_col_len;
	int arr[3][4] = { //��Ŀ��� ���� ���̴� ������ �� ������ ���� ���̴� �ݵ�� ����Ѵ�.
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

void ptrex() { //���������� ��뿹
	int x = 7;
	int* ptr = &x; //�����ʹ� ����� ���ÿ� �ʱ�ȭ �ϴ°��� ����. ��� ��������� �ʱ�ȭ�ؾ��Ѵ�.
	int** pptr = &ptr;

	// + �����͸� �ѹ��� ������ ������ ���� ���� �������̸� �տ� *�� �ٿ����Ѵ�.
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

// �� �� �ִ°�: arr�� �迭�� �̸��̰ų� �������̰� n�� ������ ��,
// arr[n] == *(arr + n)


