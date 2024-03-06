#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int frequency(const char string[], char ch){
	if (string == NULL){
		return 0;
	}


	int freq = 0, c;
	while (*string){
		if (toupper(*string) == toupper(ch)){
			freq++;
		}
		*string++;
	}

	return freq;
}


// int main(){

// 	printf("%d\n", frequency("Test!", 't'));
// 	printf("%d\n", frequency("Test!", 'T'));
// 	printf("%d\n", frequency("Test!", 'e'));
// 	printf("%d\n", frequency("Test!", '!'));
// 	printf("%d\n", frequency("Test!", 'a'));
// 	return 0;
// }