#include "main.h"
#include <unistd.h>


void puts2(char *str)
{
	 int ind;

	 for (ind = 0; ind[str] != '\0'; ind++)
	 {
	 	if (ind[str]%2 == 0)
			_putchar(ind[str]);
	 }
	 _putchar('\n');
}

