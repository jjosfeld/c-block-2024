#include <stdio.h>

long iteP(unsigned int k){
	if (k <= 2){
		switch (k){
			case 0:
				return 3;
			case 1:
				return 0;
			case 2:
				return 2;
		}
	}

	long p, a = 3, b = 0, c = 2;
	for (int i = 3; i <= k; i++){
		p = b + a;
		a = b; b = c; c = p;
	}
	return p;
}

// int main(){
// 	printf("%ld\n", iteP(8));
// 	return 0;
// }