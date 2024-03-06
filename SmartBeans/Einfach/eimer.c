#include <stdio.h>

int eimer(double l, double leak){
	int minutes = 0;
	l *= 100;
	while (l > 1){
		l *= ((100-leak)/100);
		minutes++;
	}
	return minutes;
}

// int main(){
// 	int e = eimer (7,25);
// 	printf("%d\n", e);
// }