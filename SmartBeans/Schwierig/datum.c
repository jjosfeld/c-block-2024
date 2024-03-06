#include <stdio.h>
#define JAHR {31,28,31,30,31,30,31,31,30,31,30,31};

int datum2int(int tag, int monat){
	int jahr[12] = JAHR;
	int sum = 0;
	while(--monat){
		sum += jahr[monat-1];
	}
	sum += tag;
	return sum;
}

void int2datum(int tage, int* ergebnis){
	int jahr[12] = JAHR;
	int monat = 0;
	while(tage > jahr[monat]){
		printf("Blub");
		tage -= jahr[monat];
		monat++;
	}
	ergebnis[0] = tage;
	ergebnis[1] = monat+1;

	return;
}

// int main(){
// 	int datum[2] = {11, 2};
// 	int2datum(41, datum);
// 	printf("%d\n", datum2int(31, 1));
// 	printf("%d.%d\n", datum[0], datum[1]);
// }