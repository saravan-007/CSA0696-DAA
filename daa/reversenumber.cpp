#include <stdio.h>
int main()
{
	int n,rev=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		int x = n%10;
		rev=rev*10+x;
		n/=10;
	}
	printf("reverse number:%d",rev);
}
