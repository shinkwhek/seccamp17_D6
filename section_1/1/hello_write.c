#include <stdio.h>
#include <string.h>

int
main (int argv, char *argc[]) {

  char str[] = "Hello world.";

  if (write(1, str, strlen(str)) == -1)
    perror("writting error.");

  return 0;
}
