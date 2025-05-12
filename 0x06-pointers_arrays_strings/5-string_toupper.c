#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

char *string_toupper(char *s)
{
	int i;

	for(i = 0; s[i] != '\0'; i++)
	
		if (s[i] >= 'a' && s[i] <= 'z')

			s[i] = s[i]-32;

	return (s);
}
