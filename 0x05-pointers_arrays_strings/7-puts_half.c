#include "main.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
  int x, y;

  x = strlen(str);
  if (x % 2 ==1)
    y = x / 2 + 1;
  else
    y = x / 2;
  for (i = y; i < x; ++)
    _putchar(str[i]);
  _putchar('\n');
      
      }