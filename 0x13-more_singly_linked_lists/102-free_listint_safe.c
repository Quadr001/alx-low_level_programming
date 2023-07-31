#include "lists.h"
#include <stdio.h>

size_t free_listint_safe(listint_t **h) {
  listint_t *current = *h;
  listint_t *tmp;
  size_t count = 0;

  if (h != NULL && *h != NULL) {
    while (current != NULL) {
      tmp = current->next;
      free(current);
      count++;
      current = tmp;      

      // Check for loop
      for (listint_t *check = *h; check != NULL; check = check->next) {
        if (check == current) {
          *h = NULL;
          return count;
        }
      }
    }

    *h = NULL;
  }

  return count;
}
