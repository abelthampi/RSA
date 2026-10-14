#include<stdio.h>

struct student
{
	int rollno;
	char name[30];
	float mark;	
};
int main()
{
	struct student s;
	struct student *ptr;
	ptr=&s;
	printf("Enter Roll No: ");
	scanf("%d",&ptr->rollno);
	printf("Enter Name: ");
	scanf("%s",&ptr->name);
	printf("Enter mark: ");
	scanf("%f",&ptr->mark);
	
	printf("\nStudent Details\n");
	
	printf("Roll No: %d\n",ptr->rollno);
	printf("Name: %s\n",ptr->name);
	printf("Mark: %f\n",ptr->mark);
	
	return 0;
	
	
	
}
