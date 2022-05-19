#include "lists.h"

/**
 * free_list - frees up memory holding linked list
 * @head: head of list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
list_t *curr = head;
list_t *nxt;

while (curr != NULL)
{
nxt = curr->next;
free(curr->str);
free(curr);
curr = nxt;
}
}

