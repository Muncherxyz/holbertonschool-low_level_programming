#include "main.h"
/**
 * int _isupper(int c) function that checks if c is uppercase
 *
 * _isupper function name
 * c is our variable
 * int _isupper(int c) returns 1 if capital returns 0 if otherwise
 * Return: 1(if c is uppercase)
 *
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
