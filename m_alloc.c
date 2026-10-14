#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n;
	printf("Enter no: of elements: ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("\nMemory allocation failed");
		return 1;
	}
	printf("\nEnter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("\nElements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",p[i]);
	}
	free(p);
	return 0;
}
