#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float top,bottom,height,dienTich;
		printf("\nNhap vao day nho = ");
    scanf("%f", &top);
    	printf("\nNhap vao day lon = ");
    scanf("%f", &bottom);
    	printf("\nNhap vao chieu cao = ");
    scanf("%f", &height);
    dienTich=height*(top+bottom)*1/2;
    printf("\n Dien tich = %.2f",dienTich);
	return 0;
}
