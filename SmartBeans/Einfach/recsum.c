#include <stdio.h>

int sum (int n){
	if (n == 0)
		return 0;
	else if (n > 0)
		return sum(n - 1) + n;
	else
		return sum(n + 1) + n;
}

// int main(){
// 	int n;
// 	while(scanf("%d", &n) != EOF)
// 		printf("%d\n", sum(n));
// }