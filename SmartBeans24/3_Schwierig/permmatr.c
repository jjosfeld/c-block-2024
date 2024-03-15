#include<stdio.h>
#define N 2

int permatcheck(const int** p, int laenge);

int main() {
  int inhalt[N*N] = {1,0,0,1};
  int *matrix[N];
  matrix[0] = &inhalt[0];
  matrix[1] = &inhalt[N];
  printf("%d\n",permatcheck((const int**)matrix,N));
}

int permatcheck(const int** p, int laenge) {
  int **ptr = (int**) p;
  ptr++;
  // int ones;
  // for (int i = 0; i < laenge; i++) {
  //   ones = 0;
  //   for (int j = 0; j < laenge; j++) {
  //     if (**ptr++ == 1) {
  //       ones ++;
  //     }
  //   }
  //   if (ones != 1) {
  //     return 0;
  //   }
  // }

  return 1;
}