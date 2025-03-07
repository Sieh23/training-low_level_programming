#include <stdio.h>

int main(void){

     char ch = 48;
     while(ch <= 57){
     if(ch == 53){
     ch++;
     continue;
     }
     putchar(ch);
     ch++;
     }
    
     putchar('\n');
     return 0;

}
