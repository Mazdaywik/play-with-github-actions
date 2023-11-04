#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "%s: bad command line\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  printf("Hello, %s!!!\n", argv[1]);
  return EXIT_SUCCESS;
}
