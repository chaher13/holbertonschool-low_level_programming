#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{

char calu;
for (calu = 'a'; calu <= 'z'; calu++)
putchar(calu);

for (calu = 'A'; calu <= 'Z'; calu++)
putchar(calu);
putchar('\n');

return (0);
}
