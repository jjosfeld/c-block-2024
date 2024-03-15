#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char ***parse_csv(char *csv);

int main(int argc, char * const argv[]) {

	char * csv_string = "Ein;Beispiel;für\n"
		"das;bessere;Verständnis\n"
		"der;Aufgabe;N5\n";
	char *** csv_array = parse_csv(csv_string);
	// printf("%s\n", csv_array[0][0]);
	// printf("%s\n", csv_array[1][2]);
	// printf("%s\n", csv_array[2][1]);

	free (csv_array);

}

char ***parse_csv(char *csv) {
	printf("Start\n");
	// row length
	int r_l = 0, r_n = 0, x, c;
	char *i = csv;
	while ((c = *i++) != '\0') {
		if (c == ';') {
			x++;
		}
		if (c == '\n') {
			r_l = x + 1;
			x = 0;
			r_n++;
		}
	}
	
	printf("Create Array\n");
	// create Array of pointers
	char ***csv_a;
	csv_a = malloc(r_n * r_l * sizeof(char*));
	if (csv_a == NULL) {
		return NULL;
	}
	printf("%s", **csv_a);

	printf("CSV Start\n");
	// fill array with pointers to content
	for (int i = 0; i < r_n; i++) {
		printf("i: %d", i);
		char *next = csv + (i * r_l);
		csv_a[i][0] = next;
		
		for (int j = 1; j < r_l - 1; j++) {
			printf(" j: %d", j);
			next = strchr(next, ';') + 1;
			csv_a[i][j] = next;
		}
		printf("\n");
	}

	return csv_a;
}