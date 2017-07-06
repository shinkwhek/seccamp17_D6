#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define A_KB 1024
#define A_MB 1048576
#define A_GB 1073741824

int main (int argv, char *argc[]) {

  unsigned long long size = 0;
  unsigned char *mem;

  do {
    mem = malloc(A_MB);
    memset(mem, 255, A_MB);
  //  printf("address: 0x%p\n", mem);
    size += A_MB;
  } while(mem);

  printf("memory size: %llu MB\n", size/A_MB);

  return 0;
}
