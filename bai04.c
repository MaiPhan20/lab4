#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float doC;
	float doF;
		printf("\nNhap do c = ");
    scanf("%f", &doC);
    doF=(doC*1.8)+32;
    printf(" \n do F = %.2f",doF);
	return 0;
}
