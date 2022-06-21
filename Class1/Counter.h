#pragma once//한번만 컴파일 하도록 해줌

/*
캡슐화
객체의 내부 구현부와 외부 사용자 부분을 분리
내부는 은닉하여 가릴수 있고
사용자 부분만 노출해서 사용에 편리하도록 함
*/

/*
클래스 이름 : Counter
숫자를 1씩 증가시킬 수 있다.	(입력x 출력x)
~0으로 초기화를 할 수 있다.		(입력o 출력x)
현재 카운팅한 값을 알려준다		(입력o 출력o)
*/



class Counter
{
//기본적으로 private으로 설정되어있다
int count;	//카운팅하는 값을 저장
public:

	Counter() : count{ 0 }//()를 사용 가능 하지만 {}를 사용하면 명확한 값을 사용해야 되기때문에 안전
	{
		count = { 0 };
	}	

	void counting()//숫자를 1씩 증가
	{
		count++;
	}
	void reset()//count를 0으로 초기화
	{
		count = 0; 
	}
	int getCount() const//count 값을 알려준다.
	{
		return count;
	}

};