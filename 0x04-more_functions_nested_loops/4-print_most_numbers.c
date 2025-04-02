#include "main.h"
#include <unistd.h>

/**
 *  print_most_numbers- checks the code .
 *  x: stores the value 50 (2).
 *  y: stores value 48 and is used to print from 0 to 9.
 *  z: stores the value 52 (4).
 */

void print_most_numbers(void)
{
	int x, y, z;
	 x = 50;
	 z = 52;

	for (y = 48; y <= 57; y++)
	{
		if (y == x || y == z)
		continue;

		_putchar(y);
	}

	_putchar('\n');
}
