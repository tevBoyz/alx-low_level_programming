#include "lists.h"

/**
 * sum_listint - return sum of all data in the list
 * @head: head of list
 *
 * Return: sum of list
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *curr;

if (head == NULL)
return (0);

curr = head;

while (curr)
{
sum += curr->n;
curr = curr->next;
}

return (sum);
}

