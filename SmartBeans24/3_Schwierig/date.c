#include <stdio.h>
#define JAHR {31,28,31,30,31,30,31,31,30,31,30,31};

// PROTOTYPES ===============
int datum2int(int tag, int monat);
void int2datum(int tage, int* ergebnis);

// // MAIN ===================================
// int main(void) {
// 	printf("%d\n", datum2int(31, 12));

// 	int date[2];
// 	int2datum(365, date);
// 	printf("%d.%d.\n", date[0], date[1]);
// 	return 0;
// }


// FUNCTIONS ===============================
int datum2int(int tag, int monat) {
	int sum = 0;
	int jahr[12] = JAHR;
	for (int i = 0; i < monat-1; i++) {
		sum += jahr[i];
	}
	sum += tag;
	return sum;
}

void int2datum(int tage, int* ergebnis) {
	int jahr[12] = JAHR;
	int i = 0;
	while (tage > jahr[i]) {
		tage -= jahr[i++];
	}
	ergebnis[0] = tage, ergebnis[1] = i+1;
}

