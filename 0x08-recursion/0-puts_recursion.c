#include "main.h"
#include <unistd.h>


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	_puts_recursion((char*)s +1);
	
	
}
