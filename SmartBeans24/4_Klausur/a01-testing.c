#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strclean(char *t);

int main(int argc, char *argv[]) {
  
 if (argc != 2) {
    printf("USAGE: %s <string>\n", argv[0]);
    return 0;
  }

  char *s = argv[1];
  
  if (s == NULL || strlen(s) >= 32) {
    printf("ERROR: illegal argument, e.g. string length >= 32\n");
    return 1;
  }

  char t[32];
  strncpy(t, s, 32);
  int c = strclean(t);
  
  printf("input: \"%s\", result: \"%s\", removed: %d\n", s, t, c);

  return 0;
}
