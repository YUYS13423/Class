#include "Counter.h"

void Counter::reset()
{
	value = 0;
}

void Counter::count()
{
	value = value + 1;
}

int Counter::getValue() const
{
	return value;
}
