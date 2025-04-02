#include "main.h"
#include <unistd.h>

/**
 *  _isupper- checks the code for uppercase letters.
 *  @c: stores the value passed to it
 * return- if c is uppercase it return 1.
 * return- if c isn't uppercase it return 0.
 * return:  is always 0.
 */

int _isupper(int c)
{

	if (c <= 90)

		return  (1);

	else
		return (0);


	_putchar('\n');
	return (0);

}
