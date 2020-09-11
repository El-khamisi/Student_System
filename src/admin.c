#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


void operations(void)
{
	while (1)
	{
		char choice;
		printf ("choose an operation :\n1.add student\n2.delete student\n3.edit student\n4.show record\n5.show all record\nyour choice :");
		scanf ("%d",&choice);
		switch (choice)
		{
			case 1:
				add_student();
				break;
			case 2:
				delete_student();
				break;
			case 3:
				edit_student();
				break;
			case 4:
				show_record();
				break;
			case 5:
				show_AllRecords();
				break;
			default :
				printf ("your input is wrong to terminate press 0 otherwise press any button :");
				scanf ("%d",&choice);
				if (choice) return 0;
		}
	}	
}


void add_student ()
{

	char name[20],PW[10];
	int id;
	float GPA ;

	printf ("enter the name of the student(max 19 chars): ");
	scanf ("%s",name);
	printf ("enter student's ID:");
	scanf ("%d",id);
	printf("enter the password (max 9 chars): ");
	scanf ("%s",PW);
	printf ("enter GPA : ");
	scanf ("%f",&GPA);

	add_record(name, PW, id, GPA);

}

int add_record (char* name,char* PW,int id,float GPA)
{
	
} 