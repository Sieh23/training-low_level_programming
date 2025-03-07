#include <stdio.h>

int main(void){

      int y = 48;
      int n = 44;
    while(y <= 57){ 
        putchar(y);
	if(y > 56){
         y++;		
          
        
	continue;
	}
	 putchar(n); 
        putchar(' ');
	y++;
      }	 
      
      putchar('\n');
return 0;
}
