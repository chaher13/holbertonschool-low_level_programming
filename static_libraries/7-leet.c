#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s: the string to be changed
 * Return: a pointer to the changed string.
 */

char *leet(char *s)
{
int i = 0, j;
char letter[] = "aAeEoOtTlL";
char number[] = "4433007711";

while (s[i])
{
for (j = 0; letter[j] != '\0'; j++)
{
if (s[i] == letter[j])
{
s[i] = number[j];
}
}
i++;
}
return (s);
}
