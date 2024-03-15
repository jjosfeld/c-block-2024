#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// EXTERNAL VARIABLES

// PROTOTYPES ===============================
char* static_str(char* string);
char* malloc_str(char string[], int len);

// // MAIN ======================================
// int main(void)
// {
// 	char* str1 = static_str("Möglichkeit 1");
// 	char str2[] = "Möglichkeit 2 (schöner)";
// 	char* str2ptr = malloc_str(str2, 24);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2ptr);
// 	free(str2ptr);
// 	return 0;
// }

// FUNCTIONS =================================
char* static_str(char *string) {
static char s_out[150];
	strcpy(s_out, string);
	return s_out;
}	

char* malloc_str(char string[], int len) {
	char *output;
	output = malloc((len + 1) * sizeof(char)); // len+1: string plus \0
	strcpy(output, string);
	return output;
}