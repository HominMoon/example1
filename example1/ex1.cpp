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

	int height = 180; // ���ͷ� ����� ���� ���⼭ 180�� ���ͷ��̶�� �Ѵ�. ������ �ʴ� ��
	const int birthYear = 98; // const�� �ɺ��� ����� ������ �� �ִ�.
	/*const�� ��ũ��(define)���� ������:
	1. Ÿ���� ��������� ������ �� ����
	2. ����ü � ����� �� ���� -> ������ ��������� Ÿ�Կ��� ��밡��
	3. Ư�� �Լ��� ���Ͽ��� ����� �� �ֵ��� �� �� ���� ->
	define�� �����س����� ���������� �ȵǹǷ�*/

	/*cout << "���̸� �Է�: ";
	cin >> age;
	cout << "���̴� " << age << "�Դϴ�." << endl;*/ 


	/*endl�� ����:
	��� �� ������ �̷������. �̶� ���۰� �������
	���۰� ������ٴ� ���� std:cout������ ����̴�*/

	cout << sum() << endl; //�ε��Ҽ��� ������ ���� ���� ex2.h

	a %= b; // ���Կ����� �� ���������� 12 % 7 = 5 �� a�� ���� (a = a % b)
	cout << a << endl;

	// ������ 

	switchex('A'); // switch�� ���� ex3.h
	cout << arrforex() << endl; // ������� for�� ���� ex3.h

	//goto ���� �� ���� �ȵɱ�? -> ���α׷��� �ڿ������� �帧�� ��ĥ ���ɼ��� �ִ�.
	// ���� ������ �����ϰ��� �ĺ��ϱ� ����� ���İ�Ƽ �ڵ带 ź����ų �� �ִ�.

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

	cout << "1���� 10������ ��: " << recursiveEx(10) << endl << endl;

	return(0);
}