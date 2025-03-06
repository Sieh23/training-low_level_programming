#include <stdio.h>

int main (void) {


  int ch = 97;

   while (ch <= 122){
	   if( ch == 101 || ch == 113){
		   ch++;
		   continue;
	   }

    putchar(ch);
    ch++;
   }
   putchar('\n');
  return 0;
}
