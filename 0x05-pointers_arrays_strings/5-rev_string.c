#include "main.h"
#include <unistd.h>
#include <stdio.h>

void rev_string(char *s)
{
	int len = 0;
	int f,b;

	while(s[len] != '\0')
	{
		len++;
	}
	
	 b = len - 1 ;

    for (f= 0; f < b; f++)
    {
        int temp = s[f];
        s[f] = s[b];
        s[b] = temp;

	b--;
    }
}

