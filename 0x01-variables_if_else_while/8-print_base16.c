#include <stdio.h>

int main(void)
{
int y = 48;
int a = 97;

while(y <= 56)
{
y++;
putchar(y);
}
for(; a <= 102; a++)
{
putchar(a);
}
putchar('\n');
return 0;
}
