#include<stdio.h>
#include<stdlib.h>
#define N 2

int permatcheck(const int ** p, int laenge){
  int hasone = 0;
  int * column;

  column = (int *) malloc(laenge * sizeof(int));

  for(int i = 0; i < laenge; i++){
    column[i] = 0;
  }
  // printf("c0: %d\n", column[0]);

  for (int i = 0; i < laenge; i++){
    for (int j = 0; j < laenge; j++){
      printf("start\n");
      // printf("p[%d][%d]: \n", i, j);
      printf("p[%d][%d]: %d\n", i, j, p[i][j]);
      switch (p[i][j]){
        case 0:{
          break;
        }
        case 1:{
            hasone++;
            column[j]++;
            printf("c%d: %d\n", j, column[j]);
            break;
        }
        default:{
          printf("err2\n");
          free (column);
          return 0;
        }
      }
    }
    if (hasone != 1){
      printf("err1\n");
      free (column);
        return 0;
    }
    hasone = 0;
  }

  for (int i = 0; i < laenge; i++){
    if (column[i] != 1){
          printf("err3\n");
          free (column);
      return 0;
    } 
  }

  free (column);
  return 1;
}

// int main() {
//   int inhalt[N*N] = {0,0,1,1};
//   int *matrix[N];
//   matrix[0] = &inhalt[0];
//   matrix[1] = &inhalt[N];
//   printf("result = %d\n",permatcheck((const int**)matrix,N));
//   // int row[] = {1};
//   // int * matrix_a[1];
//   // matrix_a[0] = &row[0];
//   // printf("%d\n", matrix_a[0][0]);
//   // printf("%d\n",permatcheck((const int **)matrix_a,1));

//   return 0;
// }
