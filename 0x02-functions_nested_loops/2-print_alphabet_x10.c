#include "main.h"
/**
 * print_alphabet -  function prints the alphabet
 *
 *
 */
void print_alphabet(void)
{
  char ch;
  int i = 0;
  
  while (i <= 9)
    {
  for (ch = 'a' ; ch <= 'z' ; ch++)
    {
      _putchar (ch);
    }
  {
    _putchar ('\n');
  }
    } 
}
