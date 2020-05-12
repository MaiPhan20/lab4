#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a,b,c,r,dtv,dtcn,dtt,cvv,cvcn,cvt;
		printf("\nNhap vao canh hinh vuong = ");
    scanf("%f", &a);
    	printf("\nNhap vao chieu rong hcn = ");
    scanf("%f", &b);
    	printf("\nNhap vao chieu dai = ");
    scanf("%f", &c);
    	printf("\nNhap vao ban kinh= ");
    scanf("%f", &r);
    dtv=a*a;
    printf("\nDien tich hinh vuong = %.2f",dtv);
    dtcn=c*b;
      printf("\nDien tich hinh chu nhat = %.2f",dtcn);
      dtt=r*3.14*r;
        printf("\nDien tich hinh tron = %.2f",dtt);
        cvv=a*4;
          printf("\nChu vi hinh vuong = %.2f",cvv);
          cvcn=(b+c)*2;
            printf("\nchu vi hinh chu nhat= %.2f",cvcn);
            cvt=2*3.14*r;
              printf("\nchu vi hinh tron = %.2f",cvt);
	return 0;
}
