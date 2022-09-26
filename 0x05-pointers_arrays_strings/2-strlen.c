#include "main.h"
/**
 * _strlen - get the length of a string
 * @s: pointer
 * Return: Return string length
 */
int _strlen(char *s)
{
  int len;

  for(; *s != '\0'; s++)
    {
      len += 1;
    }
  return (len);
}
  
