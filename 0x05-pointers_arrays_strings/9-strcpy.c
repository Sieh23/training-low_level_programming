#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

char *_strcpy(char *dest, char *src)
{

	int len;
	 
	for (len = 0; len[src] != '\0'; len++)
	{
		_putchar(len[src]);
		dest = src;	
	}
	
	return(dest);
}
