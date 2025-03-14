#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Always 0.
 */


void print_alphabet_x10(void)
{
int i;
for (i = 0; i <= 10; i++)
{
char c;
for (c = 97; c <= 122; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
