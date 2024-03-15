#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int strclean(char *t);

// int main(int argc, char const *argv[])
// {
//   char s[32] = "test 1 2 3 ";
//   printf("%d\n", strclean(s));
//   printf("%s\n", s);
//   return 0;
// }

int strclean(char *t) {
  if (t == NULL) {
    return -1;
  }
  char *i = t, *j = t; // i = current char; j= cleaned char
  char c;
  int removed = 0;

  while ((c = *i++) != '\0') {
    if (isgraph(c)) {
      *j++ =  c;
    }
    else {
      removed++;
    }
  }
  *j = '\0';

  return removed;
}