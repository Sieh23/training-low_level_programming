#include "main.h"
#include <unistd.h>

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		s[num] = b;
	}	
	return (s);
}
