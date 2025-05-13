#include "main.h"
#include <unistd.h>
#include <stdio.h>

void rev_string(char *s)
{
	int len = 0;
	int i,j;

	while(s[len] != '\0')
	{
		len++;
	}
	
	 j = len - 1 ;

    for (i = 0; i < j; i++)
    {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;

	j--;
    }
}

