#include "lists.h"
/**
  *print_list - prints all the elements of a list_t.
  *@h: pointer to list.
  *
  *Return: the number of nodes.
  */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		if(h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
