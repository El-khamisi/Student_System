
#include "admin.h"



void admin_operations(linkedList* ptr)
{
	while (1)
	{
		int choice;
		printf ("choose an operation :\n1.add student\n2.delete student\n3.edit student\n4.show record\n5.show all records\n6.change the password\n7.terminate operations\nyour choice :");
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
			case 6:
				change_PW_admin();
				break;
			case 7:
					return;
			default :
				printf ("your input is wrong to terminate press 0 otherwise press any button :");
				scanf ("%d",&choice);
				if (!choice) return;
		}
	}	
}


void add_student (linkedList* ptr)
{

	char name[21],PW[11];
	int id, year ;

	printf ("enter the name of the student(max 20 chars): ");
	scanf ("%20s",name);
	printf ("enter student's ID:");
	scanf ("%d",&id);
	printf("enter the password (max 10 chars): ");
	scanf ("%10s",PW);
	printf ("enter year : ");
	scanf ("%d",&year);

	insertList(ptr ,id ,name ,PW ,year);

}

void delete_student(linkedList* ptr )
{
	int id;
	printf ("enter the ID: ");
	scanf("%d",&id);
	
	if(deleteNode(ptr , id)){

		printf("Deleted Successfully...\n");		
	}
	else
	{
		printf("The ID you have Entered Not Found...!\n");
	}
	
	
}

void edit_student (linkedList* ptr)
{
	int id;
	int choice;
	while (1)
	{
		printf ("enter the ID: ");
		scanf("%d",&id);
		Node* nodePtr =search(ptr,id);
		if (nodePtr==NULL) 
		{
			printf ("the ID is not found to terminate press 0 otherwise press any button :");
			scanf ("%d",&choice);
			if (choice==0)return;
		}
		else break;
	}
	while (1)
	{
		printf ("1.change the name\n2.change the password\n3.change year\nyour choice :");
		scanf ("%d",&choice);
		switch (choice)
		{
			case 1:
				char name[21];
				printf ("enter the new name :");
				scanf ("%20s",name);
				stpcpy(nodePtr->name,name);
				return;
			case 2:
				char PW[11];
				printf ("enter the new password:");
				scanf ("%10s",PW);
				stpcpy(nodePtr->pass,PW);
				return;
			case 3:
				int year;
				printf ("enter the year: ");
				scanf ("%d",&year);
				noePtr->year=year;
				return;
			default :
				printf ("wrong choice press 0 to terminate otherwise press any key :");
				scanf ("%d",&choice);
				if (choice==0) return;
		}
	}
}

void show_student (linkedList* ptr)
{
	int id;
	Node *node_ptr;
	printf("enter the ID: ");
	scanf("%d",&id);
	node_ptr = search(ptr,id);
	if (node_ptr == NULL) 
	{
		printf("The ID you have Entered Not Found...!\n");
	}
	else{
		printr(node_ptr);	
	}

}

void show_AllRecords (linkedList* ptr)
{
	travers(ptr,printr);
} 

void change_PW_admin()
{
	
	char temp[11];
	printf ("enter new password:");
	scanf ("%s",temp);
	strcpy(admin_details[1],temp);
}


void printr(Node *node_ptr){
	printf ("Name : %-20s| Password :%-10s|ID :%d|year :%d\n",
		node_ptr->name,node_ptr->pass,node_ptr->ID,node_ptr->year);
}