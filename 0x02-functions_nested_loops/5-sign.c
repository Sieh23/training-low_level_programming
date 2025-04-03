#include "main.h"
#include <unistd.h>

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return 1;
}

else if (n < 0)
{
_putchar('-');
return -1;
}

else
{
_putchar(48);
return 0;
}
_putchar('\n');
return 0;
}
