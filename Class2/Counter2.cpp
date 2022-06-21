#include "Counter2.h"

Counter2::Counter2(int count):value{count}
{
}

Counter2::~Counter2()
{
}


void Counter2::reset()
{
	value = 0;
}

void Counter2::count()
{
	value = value + 1;
}

int Counter2::getValue() const
{
	return value;
}
