#include <stdio.h>
#include <limits.h>

int sequence(int x, int n){

  int threshold = (INT_MAX - 1) / 3;
  if (n < 0)
    return 0;
  if (n == 0)
    return x;
  while (n > 0){
    if (x % 2 != 0 && x >= threshold){
        return -1;
    }

    if (x % 2 == 0){
      x /= 2;
    }
    else {
      x = 3 * x + 1;
    }

    n--;
  }
  return x;


}

// int main(int argc, char *argv[]) {
  
//   int x = 3;
//   int min = -2, max = 8;

//   for (int n = min; n <= max; n++)
//     printf("sequence(%d, %d) == %d\n", x, n, sequence(x,n));

//   return 0;
// }