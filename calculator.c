#include<stdio.h>
int main ()
{
	float a,b;
	char operator;
	printf("enter the values of a,b=");
	scanf("%f %f",&a,&b);
	printf("enter operand(+,-,*,/)=");
	scanf(" %c",&operator);
	switch(operator)
	{
		case '+': printf("%.2f+%.2f=%.2f",a,b,a+b);
			break;
		case '-': printf("%.2f-%.2f=%.2f",a,b,a-b);
			break;
		case '*': printf("%.2f*%.2f=%.2f",a,b,a*b);
			break;
		case '/':
		if(b!=0)
		{
	    printf("%.2f/%.2f=%.2f",a,b,a/b);
		}
		else
		{
			printf("division by zero is not allowed");
		}
			break;
		
		default: printf("invalid input");
		
	}
	return 0;
}
