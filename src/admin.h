#ifndef ADMIN_H
#define ADMIN_H


// Global Header
/*
#include "../global.h"  
*/










//receive ID, StudentName, StudentPassword, and Year.
//Then Try to addNewRecord and return 1 if success, 0 otherwise
int addRecord(int ID,char *name, char *pass, int year);

//receive ID
//Then Try to remove Existing Record and return 1 if success, 0 otherwise
int removeRecord(int ID);

//receive ID
//Try to editExistingRecord and return 1 if success, 0 otherwise
int editRecord(int ID);

//receive ID
//Try to viewExistingRecord and return 1 if success, 0 otherwise
int viewRecord(int ID);








#endif   //ADMIN_H