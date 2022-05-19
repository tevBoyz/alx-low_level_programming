#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add node to the begining of a node
 * @head: head of node
 * @str: data
 *
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
unsigned int str_leng;
list_t *new_node;

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
new_node->next = *head;
*head = new_node;

return (new_node);
}

