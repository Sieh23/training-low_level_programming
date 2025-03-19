#include <stdio.h>

int main(void)
{

int x = 48;
int y = 44;
int z = 32;

while(x <= 57)
{
putchar(x);
if(x <= 56)
{
putchar(y);
putchar(z);
}
x++;
}
putchar('\n');
return 0;
}
