#include <iostream>
#include <string>
using namespace std;



//소실코드 

struct Book //구조체의 선언
{
	string title;
	string author;
	int price;

};

void structEx() { //구조체의 초기화 방식
	Book book1;
	Book book2;

	book1.title = "C++"; //멤버 참조 연산자 '.' 를 이용
	book1.author = "homin";
	book1.price = 18000;

	book2 = { "C#", "moon", 15000 }; //중괄호를 이용한 초기화 리스트

	cout << "Book1: " << book1.title << " " << book1.author << " " << book1.price << endl;
	cout << "Book2: " << book2.title << " " << book2.author << " " << book2.price << endl << endl;

	// + 구조체 변수를 초기화 할 때 '=' 사용할 수 있으나 narrowing은 지원 Xz


}

struct Prop
{
	int saving;
	int loan;

};

int CalcProperty1(int s, int l) {
	return (s - l);
}

int CalcProperty2(Prop* money) {
	money->saving = 9000; //포인터를 통해 멤버에 접근하는 경우 '->'사용
	return (money->saving - money->loan);
}

void structEx2() {

	Prop moon;
	moon.saving = 10000;
	moon.loan = 4000;

	int moonProp =  CalcProperty1(moon.saving, moon.loan); //구조체 멤버변수를 함수의 인수로 전달

	cout << "총 재산: " << moonProp << endl;

	moonProp = CalcProperty2(&moon);

	//포인터를 인수로 전달하는 방식은 속도가 빠르다.
	// 하지만 원본 구조체에 직접 접근한다(당연, call by reference니까)
	// 원본 구조체의 데이터가 변경되므로 위험할 수 있다!
	// const를 사용하여 함수에 인수를 주소로 전달할 때 수정되는 것을 막을 수 있다.

	cout << "총 재산: " << moonProp << endl << endl;

}

struct Sizeof
{
	char a;
	int b;
	double c;
};

void structEx3() {
	Sizeof size;
	cout << "각 멤버변수의 크기: " << sizeof(size.a) << " " << sizeof(size.b) <<
		" " << sizeof(size.c) << endl;

	cout << "구조체 'size'의 크기: " << sizeof(size) <<endl << endl;

	//위는 합이 13 아래는 16이 나온다... 왜?
	//구조체를 메모리에 할당할 때 컴파일러는 속도향상을 위해
	// '바이트패딩'을 한다. -> 가장 큰 멤버변수를 기준으로 멤버변수의 메모리 크기를 맞춘다.

}

int recursiveEx(int n) { //재귀함수의 동작

	if (n == 1)
		return 1;

	return n+recursiveEx(n-1);
}
