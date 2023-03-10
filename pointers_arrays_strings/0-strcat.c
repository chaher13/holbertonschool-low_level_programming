#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: apointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int destlen = 0, i;

while (dest[destlen])
{
destlen++;
}

for (i = 0; src[i] != 0; i++)
{
dest[destlen] = src[i];
destlen++;
}
dest[destlen] = '\0';
return (dest);
}
