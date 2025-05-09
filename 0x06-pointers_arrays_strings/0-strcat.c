#include "main.h"
#include <unistd.h>


char *_strcat(char *dest, char *src)
{

	int c_1,c_2;

	for (c_1 = 0; dest[c_1] != '\0'; c_1++);

	for (c_2 = 0; src[c_2] != '\0'; c_2++)
	{
		dest[c_1] = src[c_2];
		
		c_1++;
	}

	dest[c_1] = '\0';

	return (dest);
}
