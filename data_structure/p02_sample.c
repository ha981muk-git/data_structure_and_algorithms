/* Verkette Listen Aufgabe Aufklärung */

#include <stdio.h>
#include <stdlib.h>


struct Node
{
         int data; 
       struct Node *next ; 
};

struct Node * head =NULL;
struct Node * current=NULL;

/* verkette Linkliste ausgeben */

void printlist()
{
     struct Node *ptr = head;
     printf("\n[HEAD]\n");

     while(ptr !=NULL)
        {
         printf("%d =>",ptr->data);
         ptr=ptr->next; 

        }
     printf("\n[NULL] \n");
}


void insert(int data)
{
      struct Node * link = (struct Node*)malloc(sizeof(struct Node));

       link->data = data; //link->key = key
       link->next = head; //Zeiger zu dem ersten Head Node 
       head = link; //Zeiger zu einer neuer Node 
}


int main()
{
       insert(24);
       insert(234);
       insert(234234);
       insert(23423);

       printlist();
       return 0; 

}





