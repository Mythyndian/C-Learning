#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage: %s path\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  char* saveptr = NULL;
  for (char* str = argv[1]; ; str = NULL) {
    char *token = strtok_r(str, "/", &saveptr);
    if (token == NULL) 
      break;
    printf("%s\n", token);
  } 

  return 0;
}
