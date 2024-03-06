#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>

int main(){
	int binno[31]; //32 digits binary > INT_MAX

	char c;
	int i = 0, digits = 0;
	while (scanf("%c", &c) != EOF){
		if (i == 31){
			printf("Error\n");
			return 0;
		}
		if (isspace(c))
			i++;
		else{
			switch (c){
				case '1':{
					binno[i] = 1;
					break;
				}
				case '0':{
					binno[i] = 0;
					break;
				}
				default:
					printf("Error\n");
					return 0;
			}
			i++;
			digits++;
		}
	}


	int dec = 0, pow2 = 1;

	for (int j = 0; j < digits; j++){
		dec += pow2 * binno[digits-j-1];
		pow2 *= 2;
	}
	printf("\n%d\n", dec);

	return 0;
}


// int main(){
// 	int decimal = 0;
// 	int i = 0;
// 	char bin[] = "";

// 	int c;

// 	while ((c = getchar()) != EOF) {
// 		if (!isspace(c) && c != '1' && c != '0'){
// 			printf("Error\n");
// 			return 0;
// 		}
// 		else{
// 			char input = (char) c;
// 			strcat(bin, &input);
// 		}
// 	}
// 	printf("%s\n", bin);
// 	return 0;
// }