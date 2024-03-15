#include <stdio.h>

int sequence(int x, int n);

int main(int argc, char *argv[]) {
  
  int x = 3;
  int min = -2, max = 8;

  for (int n = min; n <= max; n++)
    printf("sequence(%d, %d) == %d\n", x, n, sequence(x,n));

  return 0;
}