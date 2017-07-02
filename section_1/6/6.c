#include <stdio.h>
#include <stdlib.h>

#define A_MB 1048576
#define A_GB 1073741824

int main (int argv, char *argc[]) {

  unsigned long long size = 0;
  unsigned long long count = 0;
  unsigned char *mem;

  while (1) {
    mem = malloc(A_MB);
    if (!mem)
      break;
    *mem = 255;
//    printf("address: 0x%08x\n", mem);
    size += A_MB;
    count++;
  }

  printf("count:       %lu\n", count);
  printf("memory size: %lu MB\n", size/A_MB);

  return 0;
}
