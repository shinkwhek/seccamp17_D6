#include <stdio.h>

int
main (int argv, char *argc[])
{

  if (1/0)
    perror("???");

  return 0;
}
