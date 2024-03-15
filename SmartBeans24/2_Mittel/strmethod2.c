#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// PROTOTYPES ===============================
char *strinv(const char *s);
char *strconcat(const char *s, const char *t);

// // MAIN ======================================
// int main(void)
// {
// 	char string[13] = "Hello World!";
// 	char string2[16] = "How's it going?";
// 	printf("%s\n", strinv(string));
// 	printf("%s\n", strconcat(string, string2));

// 	return 0;
// }

// FUNCTIONS =================================

char *strinv(const char *s) {
	char *inverse;
	size_t n = strlen(s);
	inverse = malloc((n+1) * sizeof(char));
	if (inverse == NULL) {
		return NULL;
	}

	int j = n - 1;
	while (j >= 0) {
		inverse[j--] = *s++;
	}
	inverse[n] = '\0';


	return inverse;
}
char *strconcat(const char *s, const char *t) {
	char *concat;
	size_t n = strlen(s) + strlen(t);
	concat = malloc((n+1) * sizeof(char));
	if (concat == NULL) {
		return NULL;
	}

	strcat(strcpy(concat, s), t);
	return concat;
}
