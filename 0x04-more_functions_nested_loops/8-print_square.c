#include "main.h"
#include <unistd.h>

/**
 *  print_square- checks the code.
 *  x: number of times the value of size will be printed.
 *  y: does the printing of the values of size.
 *  @size: stores the values to be printed.
 */

void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar(35);

		}
		_putchar('\n');
	}

}
