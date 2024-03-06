#include <stdio.h>

int main(){
	int x = 1, y;
	while(x <= 5){
		printf("%d", x);
		y = 2;
		while(y <= 5){
			printf(" %2d", x*y);
			y++;
		}
		printf("\n");
		x++;
	}

	return 0;
}