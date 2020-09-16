
#include "admin.h"

char admin_details[MAX][6] = {"admin", "1234"};


void admin_operations(linkedList* ptr)
{
	while (1)
	{
		int choice = 1000000;
		printf ("choose an operation :\n\
		1.Add student\t2.Delete student\t3.Edit student\n\
		4.Show record\t5.Show all Records\t6.Channge password\n\
		\t\t7.Terminate operations\nYour choice: ");

		scanf ("%d",&choice);getchar();
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
				scanf ("%d",&choice);getchar();
				if (!choice) return;
		}
	}	
}


void add_student (linkedList* ptr)
{

	char name[21],PW[11];
	int id, year ;

	printf ("Enter the name of the student(max 20 chars): ");
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
	Node *nodePtr ;

	while (1)
	{
		printf ("Enter the ID: ");
		scanf("%d",&id);
		nodePtr = search(ptr,id);
		if (nodePtr==NULL) 
		{
			printf ("the ID is not found to terminate press 0 otherwise press any button :\n");
			scanf ("%d",&choice);getchar();
			if (!choice)return;
		}
		else break;
	}
	while (1)
	{
		char name[21];
		char PW[11];
		int year;
		printf ("\t\t1.change the name\n\
		2.change the password\n\
		3.change year\nYour choice : ");
		scanf ("%d",&choice);getchar();
		switch (choice)
		{
			case 1:
				
				printf ("Enter the new name :");
				scanf ("%20s",name);
    			strcpy(nodePtr->name, name);
				return;
			case 2:
				
				printf ("Enter the new password:");
				scanf ("%10s",PW);
    			strcpy(nodePtr->pass, PW);
				return;
			case 3:
				
				printf ("enter the year: ");
				scanf ("%d",&year);
				nodePtr->year=year;
				return;
			default :
				printf ("wrong choice press 0 to terminate otherwise press any key :");
				scanf ("%d",&choice);getchar();
				if (!choice) return;
		}
	}
}

void show_student (linkedList* ptr)
{
	int id;
	Node *node_ptr;
	printf("Enter the ID: ");
	scanf("%d",&id);
	printf("\n");	
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
	printf("\n");	
	travers(ptr,printr);
	printf("\n");	
} 

void change_PW_admin()
{
	
	char temp[11];
	printf ("Enter new password:");
	scanf ("%10s",temp);
	strcpy(admin_details[1],temp);
}


void printr(Node *node_ptr){
	printf ("--> Name : %-20s| Password :%-10s|ID :%-10d|year :%d\n",
		node_ptr->name,node_ptr->pass,node_ptr->ID,node_ptr->year);
}