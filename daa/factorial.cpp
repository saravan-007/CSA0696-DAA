#include <stdio.h>
int main()
{
	int n,fact=1,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("Factorial of %d is:%d",n,fact);
}
