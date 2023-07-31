#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list and returns the number of nodes
* @head: Pointer to the first node of the linked list
*
* Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t num_nodes = 0;
const listint_t *current = head;

while (current)
{
printf("[%p] %d\n", (void *)current, current->n);
num_nodes++;
/* Check if the next node points back to a previous node (infinite loop) */
if (current >= current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
break;
}
current = current->next;
}

return (num_nodes);
}
