#include <stdio.h>

int main(void)
{
int y = 97;

while(y <= 122)
{	
for(; y == 101 || y == 113;y++)
{
continue ;
}
putchar(y);
y++;
}
putchar('\n');
return 0;
}
