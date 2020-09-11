#include "check.h"



int student()
{
	int ID;
	char Pass[12];
	char *student_Pass = Pass;
	
	// Take The ID from the student
	printf("Enter your ID : ");
	scanf("%d", &ID);
	// Search ID
	
	
}

//Check admin informations
void admin()
{
	int check_user, check_pass;
	
	check_user = check_admin_username();
	if (check_user == 1){
		
		check_pass = check_admin_password();
		if (check_pass == 1){
			printf("Login sucessful ..!\n");
			
			//Call admin panel
			operations();
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
	if (strcmp(username, admin_name) == 0)
		return 1;
	else 
	{
		printf("Wrong username ..! Enter username again.\n");
		
		//Call check_admin_username function again if the username is wrong
		check_admin_username();
	}
}

//Check admin password
int check_admin_password()
{
	char password[12];
	
	printf("Enter your password : ");
	scanf("%s", password);
	
	// Compare the password entered by the admin with the stored password
	if (strcmp(password, admin_pass) == 0)
		return 1;
	else 
	{
		printf("Wrong password ..! Enter password again.\n");
		
		// Call check_admin_password function again if the password is wrong
		check_admin_password();
	}
}