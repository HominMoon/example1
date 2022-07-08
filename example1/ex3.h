#include <iostream>
#include <string>
using namespace std;



//�ҽ��ڵ� 

struct Book //����ü�� ����
{
	string title;
	string author;
	int price;

};

void structEx() { //����ü�� �ʱ�ȭ ���
	Book book1;
	Book book2;

	book1.title = "C++"; //��� ���� ������ '.' �� �̿�
	book1.author = "homin";
	book1.price = 18000;

	book2 = { "C#", "moon", 15000 }; //�߰�ȣ�� �̿��� �ʱ�ȭ ����Ʈ

	cout << "Book1: " << book1.title << " " << book1.author << " " << book1.price << endl;
	cout << "Book2: " << book2.title << " " << book2.author << " " << book2.price << endl << endl;

	// + ����ü ������ �ʱ�ȭ �� �� '=' ����� �� ������ narrowing�� ���� Xz


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
	money->saving = 9000; //�����͸� ���� ����� �����ϴ� ��� '->'���
	return (money->saving - money->loan);
}

void structEx2() {

	Prop moon;
	moon.saving = 10000;
	moon.loan = 4000;

	int moonProp =  CalcProperty1(moon.saving, moon.loan); //����ü ��������� �Լ��� �μ��� ����

	cout << "�� ���: " << moonProp << endl;

	moonProp = CalcProperty2(&moon);

	//�����͸� �μ��� �����ϴ� ����� �ӵ��� ������.
	// ������ ���� ����ü�� ���� �����Ѵ�(�翬, call by reference�ϱ�)
	// ���� ����ü�� �����Ͱ� ����ǹǷ� ������ �� �ִ�!
	// const�� ����Ͽ� �Լ��� �μ��� �ּҷ� ������ �� �����Ǵ� ���� ���� �� �ִ�.

	cout << "�� ���: " << moonProp << endl << endl;

}

struct Sizeof
{
	char a;
	int b;
	double c;
};

void structEx3() {
	Sizeof size;
	cout << "�� ��������� ũ��: " << sizeof(size.a) << " " << sizeof(size.b) <<
		" " << sizeof(size.c) << endl;

	cout << "����ü 'size'�� ũ��: " << sizeof(size) <<endl << endl;

	//���� ���� 13 �Ʒ��� 16�� ���´�... ��?
	//����ü�� �޸𸮿� �Ҵ��� �� �����Ϸ��� �ӵ������ ����
	// '����Ʈ�е�'�� �Ѵ�. -> ���� ū ��������� �������� ��������� �޸� ũ�⸦ �����.

}

int recursiveEx(int n) { //����Լ��� ����

	if (n == 1)
		return 1;

	return n+recursiveEx(n-1);
}
