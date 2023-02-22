#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
char ca;
char e;
char q;

e = 'e';
q = 'q';

for (ca = 'a'; ca <= 'z'; ca++)
{
if (ca != e && ca != q)
putchar(ca);
}
putchar('\n');
return (0);
}
