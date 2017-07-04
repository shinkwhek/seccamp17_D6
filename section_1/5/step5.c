#include <stdio.h>
#include <stdlib.h>

void
recursion_stack (unsigned int count)
{
  if (count == 0)
    return;
  else {
    int stack; 
    printf("address: 0x%08x\n", &stack);
  }

  recursion_stack(--count);
}


int
main (int argv, char *argc[])
{

  if (argv <2) {
    perror("plz input recursion count");
    exit(0);
  }

  recursion_stack(atoi(argc[1]));
 

  return 0;
}
