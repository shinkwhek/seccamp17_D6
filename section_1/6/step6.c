#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define A_KB 1024
#define A_MB 1048576
#define A_GB 1073741824

int main (int argv, char *argc[]) {

  unsigned long long size = 0;
  unsigned char *mem;

  while(1) {
    mem = malloc(A_MB);
    if (mem == NULL) break;
    memset(mem, 0, A_MB);
    printf("%p\n", mem);
    size += A_GB;
  };

  printf("memory size: %llu MB\n", size/A_MB);

  return 0;
}
