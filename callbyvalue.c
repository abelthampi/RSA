//call by value
#include<stdio.h>
void change(int x)
{
	printf("inside function, x= %d\n",x);
	x=20;
	printf("x= %d\n",x);
	
}
int main()
{
	int a=10;
	printf("a= %d\n",a);
	change(a);
	printf("%d",a);
	
	return 0;
	
}
