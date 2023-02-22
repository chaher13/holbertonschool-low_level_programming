#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{

int n;
char ca;

for (n = '0'; n <= '9'; n++)
putchar(n);

for (ca = 'a'; ca <= 'f'; ca++)
putchar(ca);
putchar('\n');

return (0);
}
