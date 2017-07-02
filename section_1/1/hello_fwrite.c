#include <stdio.h>
#include <string.h>

int
main (int argv, char *argc[])
{
 
  char str[] = "Hello world.";

  fwrite(str, sizeof(char), strlen(str), stdout);

  return 0;
}
