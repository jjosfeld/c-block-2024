#include <stdio.h>

typedef struct {
  long low;   // lower bound
  long up;    // upper bound
} interval_t;

int is_empty_intersection(const interval_t *a, const interval_t *b);

// int main(int argc, char const * argv[]) {
//   interval_t a;
//   a.low = 0;
//   a.up = 0;

//   interval_t b;
//   b.low = -10;
//   b.up = -8;

//   printf("%d\n", is_empty_intersection(&a, &b));
//   return 0;
// }

int is_empty_intersection(const interval_t *a, const interval_t *b) {
  interval_t intersection;
  if (a == NULL || b == NULL) {
    intersection.low = 0;
    intersection.up = -1;
  }
  else {
    // lower bound: max of bounds
    intersection.low = a->low > b->low ? a->low : b->low;
    // upper bound: min of bounds
    intersection.up = a->up < b->up ? a->up : b->up;

  }
  printf("l: %ld u: %ld\n", intersection.low, intersection.up);

  return intersection.up < intersection.low;
}