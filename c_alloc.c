#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,newn;
	printf("Enter no: of elements: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
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
	printf("\nEnter new size: ");
	scanf("%d",&newn);
	p=(int*)realloc(p,newn*sizeof(int));
	if (p==NULL)
	{
		printf("\nMemory reallocation failed");
		return 1;
	}
	if(newn>n)
	{
		printf("\nEnter new elements:\n");
		for(i=0;i<newn;i++)
		{
			scanf("%d",&p[i]);
		}
		printf("\nNew elements are:\n");
		for(i=0;i<newn;i++)
		{
			printf("%d\n",p[i]);
		}
	}
	free(p);
	return 0;
}


