#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main (int argc, char *argv[])
{
	int ind = 1;
	int num = 1;
	
	for (; ind < argc; ind++)
	{
		num *= atoi(argv[ind]);	
	}

	if (argc != 3)
		printf("Error\n");	

	if (ind > 1)
		printf("%d\n",num);	

	return (1);
}
