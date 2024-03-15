#include <stdio.h>
#include <limits.h>

// typedef struct {
//   int zaehler;
//   int nenner;
// } bruch_t;

bruch_t *max_rational(bruch_t list[], int length);

bruch_t *max_rational(bruch_t list[], int length) {
	if (list == NULL || length < 0) {
		return NULL;
	}

	if (length == 1) {
		return &(list[0]);
	}

	bruch_t max;
	max.zaehler = INT_MIN + 100;
	max.nenner = 1;
	int max_i = -1;

	for (int i = 0; i < length; i++) {
		bruch_t diff = sub_rational(&max, &(list[i]));
		if (diff.zaehler < 0) {
			max = list[i];
			max_i = i;
		}
	}

	return &(list[max_i]);
}