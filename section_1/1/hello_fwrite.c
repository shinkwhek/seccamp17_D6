#include <stdio.h>

int
main (int argv, char *argc[])
{
 
  char str[] = "Hello world.";

  fwrite(str, sizeof(char), sizeof(str), stdout);

  return 0;
}
