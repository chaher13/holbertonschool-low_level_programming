0;10;1c#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n, value, c;
value = 0;
for (i = 0; s[i] != '\0'; i++)
{
check = 0;
for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[i])
{
value++;
c = 1;
}
}
}
}