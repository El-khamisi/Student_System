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

//Initialize a variable to count number of attemps to login
int attemps_count;



void printr(Node *node_ptr);





#endif   //GLOBAL_H