//to copy one string to another
#include<stdio.h>

void stringcopy(char str1[],char str2[])
{
	int i=0;
	while (str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
}

int main()
{
	char str1[100], str2[100];
	printf("\nEnter a String: ");
	gets(str1);
	stringcopy(str1,str2);
	printf("\nCopied String is %s",str2);
	
	return 0;
}
