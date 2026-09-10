//string length
#include<stdio.h>

int strLength(char str[])
{
	int i=0;
	while (str[i]!='\0')
	{
		i++;
	}
	return i;
}
int main()
{
	
	char str[100];
	printf("Enter a string: ");
	gets(str);
	printf("\nLength of the string: %d",strLength(str));
	return 0;
}


