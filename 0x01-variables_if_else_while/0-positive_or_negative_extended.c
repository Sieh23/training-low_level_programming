#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int n;
        int r;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
   
     
       if(n > 0){
        printf("%d is positive ",n);
        }
        else if(n < 0){
        printf("%d is negative",n);
        }
        else{
        printf("%d is zero ",n);
        }
      
    
       r = n%2;   

       if(r == 0 ){
       printf("and is even '\n'");
       }
       if(r > 0|| r < 0){
       printf(" and is odd '\n'");
       }



	return 0;
}
