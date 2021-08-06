#include <stdio.h>      /* printf */
#include <math.h>       /* fmin */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("fmin (100.0, 1.0) = %f\n", fmin(100.0, 1.0));
	printf("fmin (-100.0, 1.0) = %f\n", fmin(-100.0, 1.0));
	printf("fmin (-100.0, -1.0) = %f\n", fmin(-100.0, -1.0));
	
	_getch();
	return 0;
}