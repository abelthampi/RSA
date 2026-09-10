//call by reference
#include<stdio.h>
void change(int *x)
{
	*x =20;
	printf("x= %d\n",*x);
}
int main()
{
	int a=10;
	printf("Before Function call: %d\n",a);
	change(&a);
	printf("After function call: %d",a);
}

