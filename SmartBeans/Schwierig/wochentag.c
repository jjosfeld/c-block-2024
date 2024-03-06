#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define JAHR {31,28,31,30,31,30,31,31,30,31,30,31};
#define WOCHE {"Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag"}

int main(){
	int day, month, year, x;
	char woche[7][20] = WOCHE;
	int jahr[12] = JAHR;

	/*----- READ IN DATE ------*/
	char datum[10];
	scanf("%s", datum);

	/*Store date as int*/
	char * token = strtok(datum, ".");
	day = atoi(token);
	token = strtok(NULL, ".");
	month = atoi(token);
	token = strtok(NULL, ".");
	year = atoi(token);

	/*-- Reject invalid dates--*/
	if (year >= 5000 || year < 1582 || (year == 1582 && month < 10) || (year == 1582 && month == 10 & day < 15)){
		printf("Ungültiges Datum!\n");
		return 0;
	}

	/*Calculate year*/
	year -= 1600;
	x = 5 + year + (year/4) + 1 - (year / 100) + (year / 400);
	if (year % 400 == 0){
		x--;
	}

	/*Calculate month and day*/
	for (int i = 0; i < month -1; i++){
		x += jahr[i];
	}
	x += day;

	if ((year % 4 == 0 && year % 100 != 0) || year %400 == 0){ //Schaltjahr
		if (month > 2){
			x++;
		}
	}

	x = x % 7;

	printf("%s\n", woche[x]);

	return 0;	
}

//01.02.2020