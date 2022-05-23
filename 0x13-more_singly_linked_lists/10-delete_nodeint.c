#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: head of node
 * @index: index
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *curr, *temp;

if (head == NULL || (*head) == NULL)
return (-1);

curr = *head;

if (index == 0)
{
if ((*head)->next)
(*head) = (*head)->next;
else
(*head) = NULL;

free(curr);
return (1);
}

while (index != 1)
{
if (curr->next == NULL)
return (-1);

curr = curr->next;
--index;
}

temp = curr->next;
if (temp->next)
curr->next = temp->next;
else
curr->next = NULL;

free(temp);

return (1);
}

