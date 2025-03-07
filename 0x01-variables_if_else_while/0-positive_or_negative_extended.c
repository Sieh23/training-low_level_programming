#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for(; n%2 == 0; n++){
        printf("%d and is even",n);
	for(; n%2 > 0; n++){
	printf("%d is odd",n);
	}
	if(n > 0){
	printf("%d is positive ",n);
	}  
        else if(n < 0){
	printf("%d is negative ",n);
	}
        else{
	printf("%d is zero ",n);
	}
   `
       	}
     n++;
	return (0);
}
