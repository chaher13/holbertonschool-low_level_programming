#include "lists.h"

/**
 * print_list - prints all the elements of the list.
 * @h: pointer on the struct
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{

			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		i++;
	}
	return (i++);
}
