#include <stdio.h>
#include "main.h"


int main(int argc, char* argv[])
{
	int ind;

	for(ind = 0; ind < argc; ind++)
		printf("%s\n",argv[0]);
	
	return (0);
}
