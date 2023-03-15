#include "lists.h"
/**
 *
 *
 */
size_t print_list(const list_t *h)
{
  const list_t *current = h;
  size_t n = 0; /* n for node counter */

  while (current != NULL){
    printf("%d", current->data);
    current = current->next;
    n++;
  }

  if(str = NULL){
    n = [0] (nil);
}
      return(n);
}
