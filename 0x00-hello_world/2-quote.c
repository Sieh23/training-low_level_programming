#include <stdio.h>

int main(void){

char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int y;

for(y = 0; str[y] != '\0'; y++){

putchar(str[y]);
}
putchar('\n');
return 1;
}
