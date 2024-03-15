#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


// PROTOTYPES =============================
int sortieren (int *von, int *bis);

/*// MAIN ===================================
int main(int argc, char const *argv[])
{
	int a[] = {5, 3, 4, 2, 2, 1};
	printf("%d mal tauschen.\n", sortieren(a, a + 6));
	for (int i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}*/

// FUNCTION ===============================
int sortieren (int *von, int *bis) {
	// printf("von %d bis %d\n", *von, *bis);
	// Fehler abfangen
	if (von == NULL || bis == NULL) {
		return -100;
	}

	// Abbruchbedingung
	if (bis - von <= 1) {
		return 0;
	}

	int change = 0;

	// find minimum
	int *i = von, *min_i, min = INT_MAX;
	while (i < bis) {
		if (*i < min) {
			min = *i;
			min_i = i;
		}
		i++;
	}

	// swap if necessary
	if (min_i != von) {
		int n = *von;
		*von = *min_i, *min_i = n;
		change++;
	}

	return change + sortieren(von + 1, bis);

}