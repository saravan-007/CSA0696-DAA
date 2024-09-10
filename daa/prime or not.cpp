#include <stdio.h>
int main()
{
	int n,c=1,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
	printf("%d is prime number",n);	
	}
	else
	{
	printf("%d is prime not number");		
	}
	
}
