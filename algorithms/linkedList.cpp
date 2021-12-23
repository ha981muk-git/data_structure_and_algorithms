#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;

class List{
private:
   typedef struct node
    {
        int data;
        node * next;
    }* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;
public :
    List();
    void addNode(int addData);
    void DeleteNode(int delData);
    void PrintList();

};

List::List(){
    head    = NULL;
    current = NULL;
    temp    = NULL;
}

void List::addNode(int addData){
    nodePtr n = new node;
    n->next = NULL;                             //Making node n point to NULL to put it at the end of list
    n->data = addData;                          // Set addData value to the pointer
    

    if(head != NULL){                           // 
     current = head; 
     while (current->next != NULL)
     {
        current = current->next;
     }
     
     current->next = n;
     
    }else{
        head = n;
    }
    

}


#endif 