/*
 * 174582回の再帰でSEGVするかしないか
 * 一回の再帰につき、48 byte 
 * 限界sizeは、 大体 0x30 * 174582 = 0x7FDE20 byte
 *
 */

#include <stdio.h>
#include <stdlib.h>

void
recursion_stack (unsigned long long count)
{
  if (count == 0)
    return;
  else {
    int stack; 
    printf("address: %p\n", &stack);
  }

  recursion_stack(--count);
}


int
main (int argc, char *argv[])
{

  if (argc <2) {
    perror("plz input recursion count");
    exit(0);
  }

  recursion_stack(atoll(argv[1]));
 

  return 0;
}
