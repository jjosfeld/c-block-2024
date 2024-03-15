#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// PROTOTYPES ===============================
char* string_filter(const char* text);

// MAIN ======================================
// int main(void)
// {
// 	char *str = string_filter("...Hallo Welt!!");
// 	printf("output: %s\n", str);
// 	// free(str);
// 	return 0;
// }

// FUNCTIONS =================================
char* string_filter(const char* text) {
	// if (text == NULL) {
	// 	return 1;
	// }

	// create a result-array that's large enough to take in the entire string
	size_t len = strlen(text);
	char *filtered;
	filtered = malloc(len * sizeof(char));

	char *start = filtered;
	while (*text) {
		if (isalpha(*text) || *text == '\0') {
			*filtered = *text;
			// printf("%c ", *filtered);
			*filtered++;
		}
		*text++;
	}
	*filtered = '\0';
	return start;
}