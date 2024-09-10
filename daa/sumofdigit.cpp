#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		int x = n%10;
		sum+=x;
		n/=10;
	}
	printf("sum of the given digit is:%d",sum);
}
