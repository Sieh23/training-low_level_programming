#include "main.h"
#include <unistd.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ind;

	for(ind = 0; ind[src] != '\0'; ind++)
		dest[ind] = src[n];

	return(dest);
}
