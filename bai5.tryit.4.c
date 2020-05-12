#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	float aCm,foot,inch;
	printf("\Centimet=");
	 scanf("%f", &aCm);
	 inch = aCm/2.54;
	 foot = aCm/12/2.54;
	 printf("\nGia tri cua inch = %.1f",inch);
	 printf("\nGia tri cua foot =%.1f",foot);
	return 0;
}
