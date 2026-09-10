//to concatenate strings
#include<stdio.h>
void concatenate(char str1[],char str2[])
{

	int i=0, j=0;
	while (str1[i]!='\0')
	{
		
		i++;
	}
	while (str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
}

int main()
{
	char str1[100], str2[100];
	printf("\nEnter 1st String: ");
	gets(str1);
	printf("\nEnter 2nd String: ");
	gets(str2);
	concatenate(str1,str2);
	printf("\nConcatenated String is %s",str1);
	return 0;
}
