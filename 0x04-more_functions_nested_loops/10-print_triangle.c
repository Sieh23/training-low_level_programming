#include "main.h"
#include <unistd.h>

/**
 *  print_triangle- checks the code.
 *  y: prints the style of the square.
 *  x: prints the number of square that size has as value.
 *  @size: stores the number of squares to be printed.
  */

void print_triangle(int size)
{
	int y, x;

	for (x = 1; x <= size; x++)
	{

		for (y = 1; y <= size; y++)
		{
			if (x + y <= size)
			{
				_putchar(' ');
			}

			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
		if (size <= 0)
	{
		_putchar('\n');
	}
}
