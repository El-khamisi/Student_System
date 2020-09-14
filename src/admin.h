#ifndef ADMIN_H
#define ADMIN_H


#include <stdio.h>
#include <stdlib.h>
#include "../global.h"
#include "linkedList.h"



extern char admin_PW[11];









void admin_operations(linkedList* ptr);
void add_student (linkedList* ptr);
void delete_student(linkedList* ptr );
void edit_student (linkedList* ptr);
void show_student (linkedList* ptr);
void show_AllRecords (linkedList* ptr);
void change_PW_admin();


#endif   //ADMIN_H
