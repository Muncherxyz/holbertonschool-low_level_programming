#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
int num = '0';
char ch;
 
for (num = '0'; num <= '9'; num++)
putchar(num);

for (ch = 'e' ; ch <= 'f' ; ch++)
putchar(ch);
putchar('\n');
return (0);
}
