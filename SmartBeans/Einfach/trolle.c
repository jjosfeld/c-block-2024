#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	for(int i = 1; i < x / 4; i++){
		printf("viele-");
	}
	if(x % 4 == 0){
		printf("viele\n");
	}
	else if (x > 4)
		printf("viele-%d\n", x % 4);
	else
		printf("%d\n", x % 4);
	return 0;
}