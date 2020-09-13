#include "user.h"

//To choose which operation what user want..
void operations_student(Node *node_ptr)
{
	int choice;
	printf("Enter a choice what U want: \n");
	printf("press 1 to Show your record\n");
	printf("press 2 to Edit your password");
	switch(choice)
	{
		case 1:
			ShowRecord(node_ptr);
			break;
		case 2:
			Edit_password(node_ptr);
			break;
		default:
			printf("check your choice!");
			break;
	}
}

//To show record..
void ShowRecord(Node *ptr){
	while(ptr != NULL)
	{
		printf("The record of selected student is:%s\t\t%d\t\t%d\t\t%s\n",ptr->name,ptr->year,ptr->Id,ptr->password);
	}

//To Edit password..
void Edit_password(Node *ptr){
	//code..
	//fun.check pass and bus the address...
	printf("Enter New password");
	scanf("%s", ptr->passward); 
	printf("Password changed successfully!");
}