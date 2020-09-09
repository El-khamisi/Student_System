#ifndef USER_H
#define USER_H

// Global Header
/*
#include "../global.h"  
*/
#include "linkedList.h"














//receive Existing ID Then Search in dataBase 
void findUser(int ID);

//Test if ID is Valid, Then retrun 1, 0 otherwise 
int isValid(int ID);

//receive Existing ID and Try to view Existing Record. Then return 1 if success, 0 otherwise
int viewRecord(int ID);

//receive ID for Existing ID, old password new password. 
//Then Try to Edit Password and return 0 if failed, 1 otherwise
int editPass(int ID, char *old,char *neww);






#endif   //USER_H