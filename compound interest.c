#include<stdio.h>
int main ()
{
	float P,R,n,T,SI,CI;
	printf("Enter principal(P)=");
	scanf("%f",&P);
	printf("Enter rate of interest(in percentage)(R)=");
	scanf("%f",&R);
	printf("Enter number of times interest is compounded per year(n)=");
	scanf("%f",&n);
	printf("Enter time (in years)(T)=");
	scanf("%f",&T);
	SI=(P*R*T)/100;
	printf("simple interest=%.2f\n",SI);
	CI=P*(pow(1+(R/100*n),n*T))-P;
	printf("Compoud interest=%.2f\n",CI);
	return 0;
}
