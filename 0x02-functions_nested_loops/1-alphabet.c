#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
        return (write(1, &c, 1));
}

int myFunction(void)
{

int y = 97;

while(y <= 122)
{
_putchar(y);
y++;
}
_putchar('\n');
return 0;
}	
