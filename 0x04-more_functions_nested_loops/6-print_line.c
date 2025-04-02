#include "main.h"
#include <unistd.h>

/**
 *  print_line- checks the code for uppercase letters.
 *  x: stores the value 1.
 *  @n: number of times the line will be printed.
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar(95);

	}
	_putchar('\n');
}
