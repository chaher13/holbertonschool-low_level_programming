#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 * Return: void;
 */

void print_alphabet_x10(void)
{
char az;
int i = 0;

while (i <= 9)
{
for (az = 'a'; az <= 'z'; az++)
{
_putchar(az);
}
_putchar('\n');
i++;
}

}
