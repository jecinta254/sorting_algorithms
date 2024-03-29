#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints our list of integers
 *
 * @list: The list that will be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
