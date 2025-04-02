#include "main.h"
#include <unistd.h>

/**
 *  print_numbers- checks the code for uppercase letters.
 *  y: hold the number 0 and is use to print from 0 to 9.
 */

void print_numbers(void)
{
	int y = 0;

	for (; y <= '9'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
