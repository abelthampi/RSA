#include<stdio.h>
void main()
{
	int a[20],n,i,key;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("\nEnter Elements: ");
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the elements you want to search: ");
	scanf("%d",&key);
	
	
	
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("Element founded",i+1);
			break;
		}
	}
		
	if(a[i]!=key)
		{
			printf("Element Not found");
		}
}
