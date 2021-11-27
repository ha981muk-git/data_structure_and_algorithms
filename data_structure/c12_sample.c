#include <stdio.h>
#include <stdlib.h>


struct node {

   int value;
   struct node * next;
};

typedef struct node node_t;

void printlist(node_t * head)
{
     node_t * temporary = head;

         while(temporary !=NULL){
         printf("%d -",temporary->value);
         temporary = temporary->next;                      
                                }
         printf("\n");
}


int main()
{
    node_t n1,n2,n3;
    node_t * head;

  n1.value = 45;
  n2.value = 23;
  n3.value = 64;
   
  

    head   =&n3;
  n3.next  =&n2;
  n2.next  =&n1;
  n1.next  =NULL;

   head =head->next;

   node_t  n4;
  n4.value =15;
  n4.next  =&n3;
  n2.next  =&n4;


 
 
  printlist(head);

  return 0;

}
