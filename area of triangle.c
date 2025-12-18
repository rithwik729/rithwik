#include<stdio.h>
int main ()
{
	int b,h;
	float A;
	printf("enter base of thr triangle = ");
	scanf("%d",&b);
	printf("enter height of the triangle = ");
	scanf("%d",&h);
	A=(1.0/2.0)*b*h;
	printf("Area of the triangle = %.2f",A);
	return 0;
}
