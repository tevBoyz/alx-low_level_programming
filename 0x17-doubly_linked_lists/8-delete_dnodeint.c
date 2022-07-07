#include "lists.h"

/**
 * dlistint_len - counts the number of nodes
 * @h: head of list
 *
 * Return: count of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *temp;

if (h == NULL)
return (0);

temp = h;

while (temp != NULL)
{
temp = temp->next;
count++;
}
return (count);
}

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: head of list
 * @index: index
 *
 * Return: 1 on success, 0 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int idx = 0;
dlistint_t *temp;

temp = *head;
if (*head == NULL || index > dlistint_len(temp))
return (-1);
if (index == 0 && temp->next)
{
temp->next->prev = NULL;
*head = temp->next;
free(temp);
return (1);
}
else if (index == 0 && temp)
{
free(temp);
*head = NULL;
return (1);
}
while (idx < index)
{
temp = temp->next;
idx++;
}
temp->prev->next = temp->next;
if (temp->next)
temp->next->prev = temp->prev;
free(temp);
return (1);
}
