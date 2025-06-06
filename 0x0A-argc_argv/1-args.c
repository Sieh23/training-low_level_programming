#include <stdio.h>
#include "main.h"

int main (int argc, char *argv[])
{

	int ind = 0;

	for (; ind < argc; ind++)
		printf("%d\n", ind);
	
	(void) argv;

	return (0);
}
