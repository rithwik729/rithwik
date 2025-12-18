#include<stdio.h>
int main ()
{
	int n,t,sum=o,remainder;
	printf("enter an integer\n=");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	if(t=sum)
	{
		printf("%d is a palindrome",t;)
	}
	else
	{
		
	}
}
