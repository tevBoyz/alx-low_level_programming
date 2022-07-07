#include "lists.h"

/**
 * sum_dlistint - calculate sum of all data in list
 * @head: head of the list
 *
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp;

temp = head;

while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
