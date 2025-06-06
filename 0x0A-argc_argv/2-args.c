#include <stdio.h>
#include "main.h"


int main (int argc, char *argv[])
{

	int ind;

	for (ind = 0; ind < argc; ind++)
		printf("%s\n", argv[ind]);

	return (0);
}
