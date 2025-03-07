#include <stdio.h>

int main (void){

         char ch = 48;
          int y = 44;

         while(ch <= 57){
             if(ch > 56){
	     putchar(ch);
	     ch++;
	     continue;
	     }
	 putchar(ch);
         putchar(y);
	 putchar(' ');
         ch++;	 
	 }
         putchar('\n');
       return 0;

}
