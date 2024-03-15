#include <stdio.h>

int rec_contains(int **pos, int *start, int *end, int x);

int main(int argc, char const *argv[])
{
	int Feld[] = {1, 2, 4, 4, 6, 7, 10, 20, 55, 69, 70, 71, 72}, x = 73;
	int **pos;
	printf("%d\n", rec_contains(pos, Feld, &Feld[12], x));
	return 0;
}

int rec_contains(int **pos, int *start, int *end, int x) {
	// printf("start: %d end: %d\n", *start, *(end-1));
	
	// Abbruchbedingungen
	if (end - start == 0) {
		// printf("Empty Array\n");
		pos = NULL;
		return 0;
	}

	if (end - start == 1) {
		// printf("Checking %d == %d?\n", x, *start);
		if (*start == x) {
			**pos = *start;
			return 1;
		}
		else {
			pos = NULL;
			return 0;
		}
	}

	// Mitte des Arrays
	int *mid = start + (end - start) / 2;

	// Divide and Conquer
	if (x < *mid) {
		// printf("mid: %d\n", *mid);
		rec_contains(pos, start, mid, x);
	}
	else {
		// printf("mid: %d\n", *mid);
		rec_contains(pos, mid, end, x);
	}
}