#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int s,m,n,r,t;
	float x,y;
	m=3;
	n=5;
	x=3.0;
	t=n/m;
	printf("\n The value after n/m is : %d",t);
	r=n%m;
			printf("\n The value after n%m is : %d",r);
			y=n/m;
			printf("\n The value after n/m is : %d",y);
			t=x*y-m/2;
			printf("\n The value after x*y-m/2 is : %d",t);
			x=x*2.0;
			printf("\n The value after x*2.0 is : %.2f",x);
			s=(m+n)/r;
			printf("\n The value after (m+n)/r is : %d",r);
			y=--n;
			printf("\n The value after --n is : %.2f",y);
}
