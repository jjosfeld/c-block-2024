#include "a04-1.c"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main (int argc, char * argv[]) {
	if (argc != 3) {
		printf ("Gib genau zwei Parameter an!\n");
		return 1;
	}

	int n = atoi(argv[1]), k = atoi(argv[2]);

	int *start, *end;
	if (n <= 0) {
		start == NULL, end == NULL;
		return -1; // TO DO!!!!
	}

	// Feld erstellen
	int *array;
	array = (int*) malloc(n * sizeof(int));

	if (array == NULL) {
		printf("Fehler beim Speichern im Heap\n");
		return -1;
	}

	// Feld initialisieren
	int add, r = rand() %n;
	for (int i = 0; i < n; i++) {
		array[i] = r;
		add = rand() %n;
		if (INT_MAX - add < r) {
			printf("Ganzzahlüberlauf bei Feldinitialisierung\n");
			return -1;
		}
		r += add;
	}

	// Feld ausgeben
	printf("Feld = {%d", array[0]);
	for (int i = 1; i < n; i++) {
		printf(", %d", array[i]);
	}
	printf("}\n");


	// Suche
	int x, **pos;
	if (k >= 0 && k < n) {
		x = array[k];
	}
	else {
		x = k;
	}
	printf("Looking for %d\n", x);

	char *erfolg = rec_contains(pos, array, &array[n 	], x) ? "" : "nicht";
	printf("%d wurde %s gefunden.\n", x, erfolg);

	return 0;
}