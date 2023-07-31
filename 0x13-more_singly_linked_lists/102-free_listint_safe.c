#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Double pointer to the head node of the linked list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *temp;

    if (!h || !*h)
        return 0;

    current = *h;
    while (current)
    {
        count++;

        if (current->next >= current)
        {
            *h = NULL;
            return count;
        }

        temp = current;
        current = current->next;
        free(temp);
    }

    *h = NULL;
    return count;
}
