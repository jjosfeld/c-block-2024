#include <stdio.h>
#include <string.h>
#include <math.h>

int string_to_int(char *s){
	int len = strlen(s), result = 0;
	int dec = len-1, neg = 1;
	if(*s == '-'){
		neg = -1;
		s++;
		dec--;
	}
	while (*s){
		int ten = (int) pow(10, dec--);
		result += ten * (*s - '0');
		s++;
	}
	return result * neg;
}

// int main(){
// 	int d = string_to_int("-51389");
// 	printf("%d\n", d);
// }