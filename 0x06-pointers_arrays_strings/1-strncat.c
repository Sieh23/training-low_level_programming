#include "main.h"
#include <unistd.h>

char *_strncat(char *dest, char *src, int n)
{

	int c_1, c_2;

	for (c_1 = 0; dest[c_1] != '\0'; c_1++);

	for (c_2 = 0; src[c_2] != '\0'; c_2++)
	{
		if (c_2 < n)
			dest[c_1 + c_2] = src[c_2];
	}
	
	return (dest);
}
