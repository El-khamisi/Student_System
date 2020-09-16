#include "user.h"
//To choose which operation what user want..

void operations_student(Node *node_ptr)
{

		int choice;
		printf("Enter a choice what U want: \n\
		press 1 to Show your record\n\
		press 2 to Edit your password\n");
		scanf("%d",&choice);getchar();
		switch(choice)
		{
			case 1:
				ShowRecord(node_ptr);
				break;
			case 2:
				Edit_password(node_ptr);
				break;
			default:
				printf("Check your choice.....!\n");
				break;
		}

}

//To show record..
void ShowRecord(Node *ptr){
	/* while(ptr != NULL)
	{
		printf("The record of selected student is:%s\t\t%d\t\t%d\t\t%s\n",ptr->name,ptr->year,ptr->ID,ptr->pass);
	} */
	if (ptr == NULL) 
	{
		printf("The ID you have Entered Not Found...!\n");
	}
	else{
		printf("\n");
		printr(ptr);
		printf("\n");	
	}

}
//To Edit password..
void Edit_password(Node *ptr){
	//code..
	//fun.check pass and bus the address...
	char password[11];
	printf("Enter New password(10 characters):");
	scanf("%s", password);
	strcpy(ptr->pass, password); 
	printf("Password changed successfully!\n");
}
