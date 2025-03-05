#include <stdio.h>

int main(void){

       int y = 48;
       char ch = 97;
       while (y < 58){
        putchar(y);
	y++;
      }
       while (ch <= 102){
        putchar(ch);
        ch++;
       }
   putchar('\n');
   return 0;

}
