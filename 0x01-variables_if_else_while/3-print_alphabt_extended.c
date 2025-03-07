#include <stdio.h>

int main(void){

        char ch =97;
        char skip[] ="Letters skipped: 2";
	int y ;
	while(ch <= 122){;
                if(ch == 101 || ch == 113){
        	ch++;
         	continue;
	}
	putchar(ch);	
        ch++;
	}
	putchar('\n');
	y = 0;
       for(; skip[y]!= '\0'; y++){
       putchar(skip[y]);
       
       }
   putchar('\n');
   return 0;
}
