#include "lists.h"

/**
 * free_listint - free memory of a list nodes
 * @head: head of node
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
listint_t *curr, *next;

curr = head;

while (curr != NULL)
{
next = curr->next;
free(curr);
curr = next;
}
}

