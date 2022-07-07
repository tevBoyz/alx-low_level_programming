#include "lists.h"


/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: head of list
 * @index: index
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int idx;
dlistint_t *temp;

if (*head == NULL)
return (-1);

temp = *head;
if (index == 0)
{
*head = temp->next;
if (temp->next != NULL)
{
temp->next->prev = NULL;
}
free(temp);
return (1);
}
for (idx = 0; temp != NULL && idx < index - 1; idx++)
{
temp = temp->next;
}
if (temp == NULL || temp->next == NULL)
{
return (-1);
}
if (temp->next->next != NULL)
{
temp->next = temp->next->next;
free(temp->next->prev);
temp->next->prev = temp;
return (1);
}
else
{
free(temp->next);
temp->next = NULL;
return (1);
}
return (-1);
}
