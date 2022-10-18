#include <stdio.h>
/**
 * main - prints name of file it was compiled from followed by a new line
 *
 * return: 0 on success
 */
int main(void)
{
  printf("%s\n", __FILE__);
  return (0);
}
