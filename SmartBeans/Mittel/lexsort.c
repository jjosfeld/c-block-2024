#include <stdio.h>
#include <string.h>

int lex_sorted( const char * array[] ){
	int i = 0;
	if (array[i] == NULL){
		return 1;
	}
	while(array[i+1] != NULL && strcmp(array[i], array[i+1]) <= 0){
		i++;
	}
	return (array[i+1] == NULL);
}

// int main(int argc, char const *argv[])
// {
// 	/* code */
// 	return 0;
// }