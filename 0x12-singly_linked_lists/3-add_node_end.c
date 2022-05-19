#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end
 * @head: head of node
 * @str: data
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *current = *head;
list_t *new_node;
unsigned int str_leng;

for (str_leng = 0; str[str_leng] != '\0'; str_leng++)
;

new_node = (list_t *) malloc(sizeof(list_t));

if (new_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->str = strdup(str);
new_node->len = str_leng;

while (current && current->next != NULL)
current = current->next;
if (current)
current->next = new_node;
else
*head = new_node;

return (new_node);
}

