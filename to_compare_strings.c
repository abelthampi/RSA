//compare 2 strings
//to compare 2 strings
#include<stdio.h>
int comparestrings(char str1[],char str2[])
{

	int i=0;
	while (str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			return 0;
		}
		i++;
	}
	
	if (str1[i]=='\0' && str2[i]=='\0')
		return 1;
	else
		return 0;
}
int main()
{
	char str1[100], str2[100];
	printf("\nEnter 1st String: ");
	gets(str1);
	printf("\nEnter 2nd String: ");
	gets(str2);
	if (comparestrings(str1,str2))
		printf("\nEqual");
	else
		printf("\nNot Equal");
	return 0;
}
