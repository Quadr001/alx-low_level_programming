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
const listint_t *slow = head, *fast = head;
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
/* Check for cycle (fast pointer catches up to slow pointer) */
if (slow == fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
num_nodes++;
slow = slow->next;
while (slow != fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
num_nodes++;
slow = slow->next;
}
printf("-> [%p] %d\n", (void *)slow, slow->n);
break;
}
printf("[%p] %d\n", (void *)slow, slow->n);
num_nodes++;
}
return (num_nodes);
}
