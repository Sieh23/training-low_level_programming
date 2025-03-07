#include <stdio.h>

int main(void){

         char ch = 122;
         int n = 90;         
	

         while(ch >= 97){
	 putchar(ch);
	 ch--;
	 }
	 while(n >= 65){
	 putchar(n);
	 n--;
	 }

	 putchar('\n');
	 return 0;
}
