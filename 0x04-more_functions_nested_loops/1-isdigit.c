#include "main.h"
#include <unistd.h>

/**
 *  _isdigit- checks the code for numbers 0 to 9.
 *  @c: stores the value passed to it.
 * Return:  is always 0.
 */

int _isdigit(int c)
{

	if (c <= '9')
		return (1);

	else
		return (0);


	_putchar ('\n');

	return (0);
}
