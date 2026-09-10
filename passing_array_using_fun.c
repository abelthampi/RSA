//passing array using functions
#include <stdio.h>
void display(int arr[],int size)
{
	int i;
	
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
		
	}
}
void main()
{
	
	int number[]={10,20,30,40,50};
	display(number,5);
	
}
