#include <stdio.h>
#include <stdlib.h>

#define A_MB 1048576
#define A_GB 1073741824

int main (int argv, char *argc[]) {

  unsigned long long size = 0;
  unsigned char *mem;

  while (1) {
    mem = malloc(A_GB);
    if (!mem)
      break;
    *mem = 255;
//    printf("address: 0x%08x\n", mem);
    size += A_GB;
  }

  printf("memory size: %lu MB\n", size/A_GB);

  return 0;
}
