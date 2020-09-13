#ifndef GLOBAL_H
#define GLOBAL_H


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "src/linkedList.h"
#include "src/admin.h"
#include "src/user.h"
#include "src/check.h"


#define MAX 2

//Declaration Linked list
linkedList list;

//Initialize Admin name and password
char *admin_details[MAX] = {"admin", "1234"};

//Initialize a variable to count number of attemps to login
int attemps_count;

//Check validity of ID
int checkID(int ID);

//Use ID to Try to looking for user
void userLogin();

//Read name and password 
//Then Check if it's valid or not
int checkAdmin(char *name, char *pass);

//request Admin and old password to change Admin password
//Then try to change password and return 1 if success, 0 otherwise
int changePass(char *name, char *old,char *neww);







#endif   //GLOBAL_H