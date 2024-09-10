#include <stdio.h>
int main()
{
	int n,i,s=0;
	printf("Enter the number:");
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		arr[s++]=i;	
		}
	}
	printf("Factors:");
	for(i=0;i<s;i++)
	{
		printf("%d,",arr[i]);
	}
	
}
