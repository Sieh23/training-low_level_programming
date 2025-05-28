#include "main.h"
#include <unistd.h>

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion((char*)s +1);

	_putchar(*s);
}
