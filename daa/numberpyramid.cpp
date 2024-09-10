#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the number:");
	scanf("%d",&n);
	int count = n-1;
	int temp=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=count;j++)
		{
			printf(" ");
		}
		for(k=1;k<=temp;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
		count--;
		temp++;
	}
}
