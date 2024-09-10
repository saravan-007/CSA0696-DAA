#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	int low=0,high=n;
	int key;
	printf("Enter the key element:");
	scanf("%d",&key);
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(key==arr[mid])
		{
		printf("element found at index:%d",mid);
		return 0;	
		}
		else if(key<arr[mid])
		{
			high=mid-1;
		}
		
		else
		{
			low=mid+1;
		}
	}
	printf("element not found");
	return 0;
}
