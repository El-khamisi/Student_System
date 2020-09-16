
#include "linkedList.h"




//initialization the List
void initList(linkedList *pt){
    pt->root=NULL;
    pt->size=0;
}

//Add Element  to a list
void insertList(linkedList *pt, int ID, char *name, char *pass, int year){
    Node *pn=(Node *)malloc(sizeof(Node));
    char *pname = (char *)malloc(sizeof(strlen(name)));
    char *ppass = (char *)malloc(sizeof(strlen(pass)));
    strcpy(pname, name);
    strcpy(ppass, pass);
    
    pn->ID=ID;
    pn->name=pname;
    pn->pass=ppass;
    pn->year=year;
    pn->next=pt->root;
    pt->root=pn;


   pt->size++;
}

//Delete Element to a list return 0 if failure
int deleteNode(linkedList *pt,  int ID){

    for(Node *pre=pt->root,*i=pt->root; i != NULL; i = i->next ){
        if(i->ID == ID){
            if (i == pt->root)pt->root=i->next;
            pre->next = i->next;
            free(i->name);free(i->pass);
            free(i);
            pt->size--;
            return 1;
        }
        pre=i;

    }
    return  0;
}

//Clear all elements form a list
void clearList( linkedList *pt){

    Node *temp;

    while (pt->root)
    {
        temp=pt->root->next;
        free(pt->root);
        pt->root=temp;
    }
    pt->size=0;
}

//return 1 if a list is Empty, 0 otherwise
int listEmpty(linkedList *pt){
    return !(pt->root);
}

//return 1 if a list is Full, 0 otherwise
int listFull(linkedList *pt){
    return 0;
}

//return Size of a list
int listSize(linkedList *pt){
    return pt->size;
}

//Looking for certain Element Then pointer to Element if success, NULL otherwise
Node *search(linkedList *pt, int ID){
    Node *temp=pt->root;
    while (temp)
    {
        if (temp->ID == ID)return temp;
        temp=temp->next;
    }
    return NULL;
}






void travers(linkedList *pt, void (*pf)(Node *)){
        Node *temp=pt->root;
    for(int i=0; i< pt->size; i++,temp=temp->next){
        (*pf)(temp);
}
}




