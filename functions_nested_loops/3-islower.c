#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: has to be checked
 * Return: 1 for lowercase charactere or 0 for anything elses
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
