#include <stdio.h>

long rekS(unsigned int k){
	if (k == 0)
		return 0;
	else if (k == 1)
		return 1;
	else if (k % 2 == 0)
		return rekS(k / 2);
	else
		return rekS(k / 2) + rekS(k / 2 + 1);
}

// int main(){
// 	printf("%ld\n", rekS(4));
// 	return 0;
// }