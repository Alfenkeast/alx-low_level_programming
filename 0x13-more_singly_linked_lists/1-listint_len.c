/*
 * File: 1-listint_len.c
 * Auth: Eke Patience
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print a functio that return the number of element
 * in a listint_t
 * @h: A pointer to the head of the listint_t list
 *
 * Return: The number of the element
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
