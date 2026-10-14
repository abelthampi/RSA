#include<stdio.h>

union student
{
	int rollno;
	char name[30];
	float mark;	
};
int main()
{
	union student s;
	union student *ptr;
	ptr=&s;
	printf("Enter Roll No: ");
	scanf("%d",&ptr->rollno);
	printf("Roll No: %d\n",ptr->rollno);
	printf("Enter Name: ");
	scanf("%s",&ptr->name);
		printf("Name: %s\n",ptr->name);
	printf("Enter mark: ");
	scanf("%f",&ptr->mark);
	printf("Mark: %f\n",ptr->mark);
	
	printf("\nStudent Details\n");
	
	
	
	
	return 0;
	
	
	
}
