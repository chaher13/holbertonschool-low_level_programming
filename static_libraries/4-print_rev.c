#include "main.h"

/**
 * print_rev -  prints a string, in reverse.
 * @s: str input.
 * Return: string in reverse
 */

void print_rev(char *s)
{

int c = 0;
int i, n;

for (i = 0; s[i] != '\0'; i++)
{
c++;
}

for (n = (c - 1); n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
