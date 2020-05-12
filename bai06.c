#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	 float diemVatli;
    float diemToan;
    float diemHoahoc;
    float dtb;
 	
    	printf("\nNhap diem vat li = ");
    scanf("%f", &diemVatli);
    printf("\nNhap diem toan hoc = ");
    scanf("%f", &diemToan);
    printf("\nNhap diem hoa hoc = ");
    scanf("%f", &diemHoahoc);
    dtb = (diemVatli + diemToan + diemHoahoc) / 3;
    printf("\nDTB = %.2f", dtb);
     
	return 0;


}
