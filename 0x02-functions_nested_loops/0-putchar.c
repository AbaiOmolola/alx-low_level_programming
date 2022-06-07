#include <stdio.h>

int main()
{
  int i;

  putchar ('_');
  putchar (' ');
  for (i=1; i<=10; i++)
    {
      putchar ('putchar');
    }
  putchar ('\n');

  return 0;
}
