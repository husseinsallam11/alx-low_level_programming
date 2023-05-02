#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pointy = h;
	size_t c = 0;

	while (pointy != NULL)
	{
		printf("%d\n", pointy->n);
		c += 1;
		pointy = pointy->next;
	}
	return (c);
}
