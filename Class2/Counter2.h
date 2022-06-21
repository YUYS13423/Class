#pragma once
	/*
	Counter Ŭ���� ����

	�ɹ�����
	Int�� value				//value ���� �����ڿ��� �ʱ�ȭ �Ѵ�.

	�Լ�
	void reset();			//value ���� 0���� �ʱ�ȭ �Ѵ�
	void count();			//value ���� 1�� ���� ��Ų��.
	int getValue() const;	//value���� return�Ѵ�.
	*/
class Counter2
{
	int value;

public:
	Counter2(int count);
	Counter2(const Counter2& c) : value{ c.value } {

	}
	~Counter2();

	void reset();
	void count();
	int getValue() const;
};


