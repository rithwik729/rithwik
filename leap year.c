#include<stdio.h>
int main ()
{
	int n;
	printf("enter the year = ");
	scanf("%d",&n);
	if (n%4==0 && n%100!=0)
	{
		printf("It is a Leap year.");
		
	}
	else 
	{
		printf("It is not a Leap year.");
		
	}
	return 0;
}
