#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 * @c: the number whui has to be computed
 * Return: Absolute value of number or zero
 */
int _abs(int c)
{
if (c < 0)
{
int absval;
absval = c * -1;
return (absval);
}
return (c);
}
