/*
 * File: 2-add_nodeint.c
 * Auth: Eke Patience
 */

#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - write a function that adds a new node at the end
 * of a listint_t list
 * @h: A pointer to the head of the listint_t
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	
