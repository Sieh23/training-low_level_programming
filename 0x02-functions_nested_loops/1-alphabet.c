#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Prints the  alphabet.
 * Return: Always 0.
 */

void print_alphabet(void)
{
int y = 97;

while (y <= 122)
{
_putchar (y);
y++;
}
_putchar('\n');

}
