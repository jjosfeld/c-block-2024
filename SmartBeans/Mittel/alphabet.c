#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int char_i(const char *str, char c){
	int len = strlen(str);
	for (int i = 0; i < len; i++){
		if (str[i] == c){
			return i;
		}
	}
	return -1;
}

char *substitute(const char *source, const char *target, const char *text){
	int len = strlen(text), letter;
	char * cypher;

	/* Set up String for cypher*/
	cypher = (char*) malloc(len + 1);
	if (cypher == NULL){
		return NULL;
	}

	/*Transpose message and store cypher*/
	for (int i = 0; i < len; i++){
		if ((letter = char_i(source, text[i])) < 0){
			free (cypher);
			return NULL;
		}
		cypher[i] = target[letter];
	}
	cypher[len] = '\0';

	return cypher;
}



// int main(int argc, char const *argv[])
// {
// 	char source[11] = "1234567890", target[11] = "0987654321";
// 	char * text;
// 	text = "149";
// 	printf("%s\n", substitute(source, target, text));
// 	return 0;
// }