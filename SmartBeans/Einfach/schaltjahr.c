#include <stdio.h>

int schaltjahr(int jahr);
int schaltjahr(int jahr){
	int is_leap;
	is_leap = (jahr % 4 == 0 && (jahr % 100 != 0 || jahr % 400 == 0));
	return is_leap;
}

// int main(){
// 	int year;
// 	while (scanf("%d", &year) != EOF){
// 		printf("Jahr %d: %d\n", year, schaltjahr(year));
// 	}
// }