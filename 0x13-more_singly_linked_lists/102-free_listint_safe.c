#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list.
* @h: Double pointer to the head of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp;
size_t count = 0;
if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current)
{
count++;
if (current <= current->next)
{
*h = NULL; /* Set the head to NULL before freeing */
return (count);
}
temp = current;
current = current->next;
free(temp);
}
*h = NULL; /* Set the head to NULL after freeing */
return (count);
}
