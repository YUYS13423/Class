#include <iostream>
#include "Counter.h"
#include "User.h"
#include "Person.h"

using namespace std;

void g(const Counter& c)
{
	//const로 클래스를 참조하면 클래스에 함수의 형태 또한 const여야 한다
	cout << "Counter = " << c.getCount() << endl;
}

int main() 
{
	Counter c1;
	c1.counting();
	c1.counting();

	cout << "c1 Count = " << c1.getCount() << endl;
	c1.counting();
	g(c1);

	Person* p1 = new Person("철수", "서울시");
	Person* p2 = new Person("광수", "경기도");

	p1->printAddr();
	p1->changeAddr("부산시	");
	p1->changeName("영희");
	p1->printAddr();


	delete p1;
	delete p2;














	/*
	포인터란?
	변수, 구조체, 클레스 등에 객체를 가르키는 변수(위치를 가르킨다)
	*/

	int a = 10;
	/*
	int* : 가리킬 객체 자료형
	ptr : 포인터 변수의 이름
	*/
	int* ptr;
	/*
	& : 주소값 계산 연산자
	*/
	ptr = &a;

	/*
	ptr : 주소값
	*ptr : 가리키고 있는 곳
	ptr이 가리키고 있는 곳에 20을 넣는다
	*/
	*ptr = 20;
	cout << "a의 값은? : " << a << endl;

	/*
	동적 메모리 할당 - 강제로 메모리 공간을 할당
	*/

	/*
	new : 동적 메모리 할당 연산자
	*/
	int* intPtr;
	intPtr = new int;
	*intPtr = 10;

	/*
	new : 동적 메모리 반환 연산자
	*/
	delete intPtr;
	intPtr = nullptr;//C에서는 NULL = 0, c++에서는 nullptr = 비어있다 라는 단어
	
	/*
	배열을 동적 메모리 할당
	*/
	int* intArrPtr;
	intArrPtr = new int[4];
	*intArrPtr = 10;
	*(intArrPtr + 1) = 20;
	intArrPtr[2] = 30;

	/*
	배열을 동적 메모리 반환
	*/
	delete[] intArrPtr;
	intArrPtr = nullptr;

	/*
	L-value 참조 방법
	*/
	int x = 10, y = 20;
	int& xRdf = x;
	xRdf = 100;
	xRdf = y;

	int i = 10, j = 20;
	int *xRdf1 = &i;
	*xRdf1 = 100;
	*xRdf1 = j;
	//위의 방식이 좀더 편안함
}