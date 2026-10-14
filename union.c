#include<stdio.h>

union data
{
	int number;
	float decimal;
	char character;
	
};
int main()
{
	union data d;
	d.number=25;
	printf("Integer value: %d\n",d.number);
	d.decimal=15.5;
	printf("Float value: %f\n",d.decimal);
	d.character='A';
	printf("Character: %c\n",d.character);
	return 0;
}
