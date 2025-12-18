#include<stdio.h>
#include<math.h>
int main ()
{
	double a,b,c,d,R,R1,R2;
	printf("enter the coefficients of the quadratic expression(a,b,c) = ");
	scanf("%lf %lf %lf",&a,&b,&c);
	if (a==0)
	{
		printf("It is not a quadratic expression.");
	}
	else
	{
		d=(b*b)-(4*a*c);
		if (d<0)
		{
			printf("roots are not real.");
		}
		else if (d==0)
		{
			R=(-b)/(2*a);
			printf("roots of the expression = %.2lf,%.2lf",R,R);
		}
		else
		{
		
			R1=(-b+(sqrt(d)))/(2*a);
			R2=(-b-(sqrt(d)))/(2*a);
	
			printf("roots of the expression = %.2lf , %.2lf",R1,R2);
		}
	}
	return 0;
}
	
