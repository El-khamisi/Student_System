
#include "admin.h"

char admin_details[MAX][6] = {"admin", "1234"};


void admin_operations(linkedList* ptr)
{
	while (1)
	{
		int choice;
		printf ("choose an operation :\n\
		1.add student\t2.delete student\t3.edit student\n\
		\t4.show record\t5.show all records\n 6. channge password your choice :");


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
			case 6 :
			change_PW_admin();
			default :
				printf("Enter Valid Number \n");

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
	printf ("enter the ID: ");
	scanf("%d",&id);
	
	delete_student(ptr);
	add_student(ptr);
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
	scanf ("%10s",temp);
	strcpy(admin_details[1],temp);
}


void printr(Node *node_ptr){
	printf ("Name : %s| Password :%-10s|ID :%d|year :%d\n",
		node_ptr->name,node_ptr->pass,node_ptr->ID,node_ptr->year);
}
