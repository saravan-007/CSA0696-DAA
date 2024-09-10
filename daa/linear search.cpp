#include <stdio.h>
int main()
{
	int key,n,j=0;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element need to search:");
	scanf("%d",&key);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("key element found at index %d",i);
			j=1;
		}
	}
	if(j==0)
	{
		printf("key element not found");
	}
}
