#include <stdio.h>
#include <stdlib.h>

#define DAYS {"Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag"}
#define MONTHS {31,28,31,30,31,30,31,31,30,31,30,31};

// PROTOTYPES ===============================


// MAIN ======================================
int main(void)
{
	// read in date
	int day, month, year;
	scanf("%d.%d.%d", &day, &month, &year);

	// check for dates that aren't permitted
	if (year >= 5000 || year < 1582 || (year == 1582 && month < 10) || (year == 1582 && month == 10 && day < 15)) {
		// printf("UNGÜLTIG!\n");
		return 1;
	}

	// // Schaltjahr?
	// int isleap = (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
	// // printf("%d\n", isleap);

	char days[][20] = DAYS;
	// int months[] = MONTHS;

	int d = day, m = ((month+9) % 12) + 1;
	int y = (year - (1 * (m >= 11))) % 100; 
	int c = (year - (1 * (m >= 11))) / 100; 
	// printf("d: %d m: %d y: %d c: %d\n", d, m, y, c);

	int w = (d + (int) (2.6 * m - 0.2) + y + y / 4 + c / 4 - 2 * c) % 7;

	printf("%s\n", days[w]);
	return 0;
}

// 30.12.1995