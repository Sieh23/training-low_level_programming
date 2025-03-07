#include <stdio.h>

int main(void){

         char ch = 97;

        while(ch <= 122){
	if(ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117){
       ch++;
       continue;       
	}
     putchar(ch);
     ch++;
	}
   putchar('\n');
  return 0;
}
