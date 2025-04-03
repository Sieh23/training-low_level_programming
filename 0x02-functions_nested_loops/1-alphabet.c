#include "main.h"
#include <unistd.h>

void print_alphabet(void)
{
int a = 97;

while (a <= 122)
{
_putchar(a);
a++;
}
_putchar('\n');
}
