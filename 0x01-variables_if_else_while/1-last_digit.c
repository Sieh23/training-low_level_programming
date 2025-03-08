#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
        int y ;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        y = n%10;
	
	printf("last digit of %d is %d ",n, y);
	
        if(y > 5){
	       printf("is greater than 5 '\n");
	}
       	else if(y == 0){
		printf(" is 0 '\n'");
	}

	else{
	
	       printf("is less than 6 and not 0 '\n'");
	} 


	return 0;
}
