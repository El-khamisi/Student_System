#include "check.h"
extern char admin_details[MAX][6];

void student()
{

	int ID;
	char Pass[12];
	int choice;

	//char *student_Pass = Pass;
	Node *node_ptr;
	// Take The ID from the student
	while (1)
	{
			printf("Enter your ID : ");
			scanf("%d", &ID);
		
			//Search the ID
			node_ptr = search(&list, ID);
			if (node_ptr == NULL)
			{
				printf("Wrong ID ..!\n press 0 to terminate otherwise press anykey :");
				scanf ("%d",&choice);
				if (choice==0) return;
			}
			else break;
	}
	while (1)
	{
		// Take the password from the student
		printf("Enter your password : ");
		scanf("%s", Pass);
		
		//Check the password
		if (strcmp(Pass, node_ptr->pass) == 0)
		{
			printf("Login successful ..!\n");
			
			operations_student(node_ptr);
			//Send the ID
			return;
		}
		else 
		{
			printf("Wrong Password ..!\npress 0 to terminate otherwise press anykey :");
			scanf("%d",&choice);
			if (choice==0) break;
			
		}
	}
}

//Check admin informations
void admin()
{
	int check_user, check_pass;
	
	//Set attemps count to 0 to calculate how many times the user enter wrong information
	attemps_count = 0;
	
	check_user = check_admin_username();
	if (check_user == 1){
		
		//Set attemps count to 0 again
		attemps_count = 0;
		
		check_pass = check_admin_password();
		if (check_pass == 1){
			printf("Login successful ..!\n");
			
			//Call admin panel
			admin_operations(&list);
		}
	}
}

//Check admin username
int check_admin_username()
{
	char username[12];
	
	printf("Enter your username : ");
	scanf("%s", username);
	
	//Compare the username entered by the admin with the stored username
	if (strcmp(username, admin_details[0]) == 0)
		return 1;
	else 
	{
		printf("Wrong username ..! Enter username again.\n");
		
		//Call check_admin_username function again if the username is wrong
		//Terminate if the username is wrong 3 times
		if (attemps_count < 2){
			attemps_count++;
			check_admin_username();
		}
		else{
			printf("Attempts limit exceeded ! Try again later ..!");
			return 0;
		}
	}
}

//Check admin password
int check_admin_password()
{
	char password[12];
	char *pass = password;
	
	printf("Enter your password : ");
	scanf("%s", pass);
	
	// Compare the password entered by the admin with the stored password
	if (strcmp(pass, admin_details[1]) == 0)
		return 1;
	else 
	{
		printf("Wrong password ..! Enter password again.\n");
		
		// Call check_admin_password function again if the password is wrong
		if (attemps_count < 2){
			attemps_count++;
			check_admin_password();
		}
		else{
			printf("Attempts limit exceeded ! Try again later ..!");
			return 0;
		}
	}
}
