#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be teated
 * Return: void
 */

void puts2(char *str)

{
int i;
int n = 0;

while (str[n] != '\0')
{
n++;
}

for (i = 0; i < n; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
