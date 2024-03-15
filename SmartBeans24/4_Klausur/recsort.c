

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


// PROTOTYPES =============================
int recSort (int* start, int* end, int reverse);

// MAIN ===================================
int main(int argc, char const *argv[])
{
	int a[4] = {5, 3, 7, 1};
	printf("%d\n", recSort(a, a+3, 0));

	for (int i = 0; i < 4; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

// FUNCTION ===============================
int recSort (int* start, int* end, int reverse) {
	// Fehler abfangen
	if (start == NULL || end == NULL) {
		return -100;
	}

	// Abbruchbedingung
	if (end-start == 0) {
		return 0;
	}

	int swaps = 0; // Wurde getauscht?

	// aktuelles array betrachten
	int *s = reverse ? end : start;
	int *e = reverse ? start : end;
	int *comp, n;
	while (s != e) {
		comp = s + 1 - 2 * reverse; // nächstes linkes oder rechtes Element
		if (reverse) {
			if (*comp < *s) {
				n = *comp, *comp = *s, *s = n;
				swaps++;
			}
		}
		else {
			if (*comp > *s) {
				n = *comp, *comp = *s, *s = n;
				swaps++;
			}
		}
		s = comp;
	}
	
	if (swaps == 0) { // Feld fertig sortiert
		return 0;
	}

	return swaps + recSort(start + 1 * reverse, end - 1 * !reverse, !reverse);
} 