#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


void operations(linkedList* ptr)
{
	while (1)
	{
		int choice;
		printf ("choose an operation :\n1.add student\n2.delete student\n3.edit student\n4.show record\n5.show all record\nyour choice :");
		scanf ("%d",&choice);
		switch (choice)
		{
			case 1:
				add_student(ptr);
				break;
			case 2:
				delete_student(ptr);
				break;
			case 3:
				edit_student(ptr);
				break;
			case 4:
				show_student(ptr);
				break;
			case 5:
				show_AllRecords(ptr);
				break;
			default :
				printf ("your input is wrong to terminate press 0 otherwise press any button :");
				scanf ("%d",&choice);
				if (choice) return 0;
		}
	}	
}


void add_student (linkedList* ptr)
{

	char name[20],PW[10];
	int id;
	int year ;

	printf ("enter the name of the student(max 19 chars): ");
	scanf ("%s",name);
	printf ("enter student's ID:");
	scanf ("%d",id);
	printf("enter the password (max 9 chars): ");
	scanf ("%s",PW);
	printf ("enter year : ");
	scanf ("%d",&year);

	insertList(ptr ,id ,name ,PW ,year);

}

void delete_student(linkedList* ptr );
{
	int id;
	printf ("enter the ID: ");
	scanf("%d",id);
	
	deleteNode(ptr , id);
	
}

void edit_student (linkedList* ptr)
{
	int id;
	printf ("enter the ID: ");
	scanf("%s",id);
	
	deleteNode(ptr , id);
	add_student(ptr);
}

void show_student (linkedList* ptr)
{
	int id;
	Node *node_ptr;
	printf("enter the ID: ");
	scanf("%d",&id);
	node_ptr=search(ptr,id);
	if (node_ptr==NULL) 
	{
		printf ("ID not found ");
	}
	else
	printf ("name :%s\nPW :%s\nID :%d\nyear :%d",node_ptr->name,node_ptr->pass,node_ptr->ID,node_ptr->year);
}
