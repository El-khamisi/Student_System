#ifndef LINKEDLIST_H
#define LINKEDLIST_H




// Global Header
/*
#include "../global.h"  
*/












//A Single Node structure
typedef struct linkedNode
{
    struct LinkedNode *next;
    int ID; 
    char *name;
    char *pass;
    int year;

}Node;


//Structure of linkedList
typedef struct linked_List
{
    Node *root;
    int size ;

}linkedList;




//initialization the List
void initList(linkedList *pt);

//Add Element  to a list
void insertList(linkedList *pt, Node *e);

//Delet Element to a list return 0 if failure
int deleteNode(linkedList *pt,  Node *e);

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














#endif   //LINKEDLIST_H