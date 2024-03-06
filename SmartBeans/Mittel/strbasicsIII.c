#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* static_st(char * string){
	char output[150];
	strcpy(output, string);

	return output;
}

char* malloc_str(char string[], int len){
	char * output;
	output = (char*) malloc(len * sizeof (char));
	if (output == NULL){
		free (output);
		return "ERROR";
	}
	else{
		strcpy(output, string);
		free (output);
		return outputt;
	}
}

// int main(){
// 	char* str1 = static_st("Möglichkeit 1");

// 	char str2[] = "Möglichkeit 2 (schöner)";
// 	char * str2ptr = malloc_str(str2, 24);

// 	printf("%s", str1);
// 	printf("%s", str2ptr);

// }