#ifndef LINKEDLIST_H
#define LINKEDLIST_H




// Global Header
/*
#include "../global.h"  
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>











//A Single Node structure
typedef struct LinkedNode
{
    struct LinkedNode *next;
    int ID;
    char *name;
    char *pass;
    int year;

}Node;


//Structure of linkedList
typedef struct
{
    Node *root;
    int size ;

}linkedList;




//initialization the List
void initList(linkedList *pt);

//Add Element  to a list
void insertList(linkedList *pt, int ID, char *name, char *pass, int year);

//Delet Element to a list return 0 if failure
int deleteNode(linkedList *pt,  int ID);

//Clear all elements form a list
void clearList(linkedList *pt);

//return 1 if a list is Empty, 0 otherwise
int listEmpty(linkedList *pt);

//return 1 if a list is Full, 0 otherwise
int listFull(linkedList *pt);

//return Size of a list 
int listSize(linkedList *pt);

//Looking for certain Element Then pointer to Element if success, NULL otherwise
Node *search(linkedList *pt, int ID);




void travers(linkedList *pt, void (*pf)(Node *));











#endif   //LINKEDLIST_H