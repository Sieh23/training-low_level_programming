#include "main.h"
#include <unistd.h>


void print_alphabet_x10(void)
{
int x, y;

for(x = 0; x <= 9; x++ )
{

for(y = 97; y <= 122; y++)
{
_putchar(y);
}
_putchar('\n');
}

}
