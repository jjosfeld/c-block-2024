#include <stdio.h>

int hauskauf(float sparen_emily, float sparen_sarah, int haus_kosten){
	float sparbuch = sparen_emily + sparen_sarah;
	int monate = 0;
	float zins = 1.015;
	while (sparbuch < haus_kosten){
		sparbuch *= zins;
		sparbuch += 2000;
		if (monate % 36 == 0)
			zins += .001;
		monate++;
		printf("Monat: %d, Gespart: %f, Zins = %f\n", monate, sparbuch, zins);
	}
	return monate;
}

// int main(){
// 	int monate = hauskauf (0.0, 0.0, 1000000);
// 	printf("monate = %d\n", monate);
// 	return 0;
// }