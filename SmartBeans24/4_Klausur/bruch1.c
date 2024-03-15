#include <stdio.h>

typedef struct {
	int zaehler;
	int nenner;
} bruch_t;

// PROTOTYPES==================================
void bruchEingabe(bruch_t* bruch);
void bruchAusgabe(bruch_t* bruch);
void bruchAddition(bruch_t* bruch, bruch_t add);
void bruchSubtraktion(bruch_t* bruch, bruch_t sub);
void bruchMultiplikation(bruch_t* bruch, bruch_t mult);
void bruchDivision(bruch_t* bruch, bruch_t div);
float bruchQuotient(bruch_t bruch);
void bruchErweitern(bruch_t* bruch, int faktor);
void bruchKuerzen(bruch_t* bruch);

int ggT(int a, int b);

// MAIN	=======================================

// int main(int argc, char const *argv[]) {
// 	bruch_t a;
// 	printf("Datensatz A eingeben:\n");
// 	bruchEingabe(&a);
// 	bruchAusgabe(&a);

// 	// bruch_t b;
// 	// printf("Datensatz B eingeben:\n");
// 	// bruchEingabe(&b);
// 	// bruchAusgabe(&b);
	
// 	// printf("A und B dividieren:\n");
// 	// bruchDivision(&a, b);
// 	// bruchAusgabe(&a);
// 	printf("Quotent: %f\n", bruchQuotient(a));

// 	return 0;
// }


// FUNCTIONS ==================================
void bruchEingabe(bruch_t* bruch) {
	scanf("%d", &bruch->zaehler);
	scanf("%d", &bruch->nenner);
}

void bruchAusgabe(bruch_t* bruch) {
	printf("%d/%d\n", bruch->zaehler, bruch->nenner);
}

void bruchAddition(bruch_t* bruch, bruch_t add) {
	int a_nenner = bruch->nenner, b_nenner = add.nenner;
	bruchErweitern(bruch, b_nenner);
	bruchErweitern(&add, a_nenner);
	bruch->zaehler += add.zaehler;
	bruchKuerzen(bruch);
}

void bruchSubtraktion(bruch_t* bruch, bruch_t sub) {
	sub.nenner *= -1;
	bruchAddition(bruch, sub);

	if (bruch->nenner < 0) {
		bruchErweitern(bruch, (-1));
	}
}

void bruchMultiplikation(bruch_t* bruch, bruch_t mult) {
	bruch->zaehler *= mult.zaehler;
	bruch->nenner *= mult.nenner;

	bruchKuerzen(bruch);
}

void bruchDivision(bruch_t* bruch, bruch_t div) {
	// Kehrwert bilden
	int n = div.nenner;
	div.nenner = div.zaehler, div.zaehler = n;

	bruchMultiplikation(bruch, div);
}

float bruchQuotient(bruch_t bruch) {
	return (float) bruch.zaehler / (float) bruch.nenner;
}

void bruchErweitern(bruch_t* bruch, int faktor) {
	bruch->zaehler *= faktor;
	bruch->nenner *= faktor;
}

void bruchKuerzen(bruch_t* bruch) {
	// ggT finden und zaehler und nenner dadurch dividieren
	int ggt = ggT(bruch->zaehler, bruch-> nenner);
	bruch->zaehler /= ggt;
	bruch->nenner /= ggt;
}

// Hilfsfunktionen ============================
int ggT (int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return ggT(b, a % b);
	}
}