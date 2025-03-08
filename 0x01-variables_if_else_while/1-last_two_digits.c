#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
        int y;
      
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n%100;
    

       printf("Last two digits of %d is %d ",n,y);
	     

	return (0);
}
