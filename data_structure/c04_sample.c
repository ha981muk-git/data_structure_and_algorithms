#include <stdio.h>
#include <stdlib.h>


struct node 
{
       int data;
       struct node * next; 
};



int fun(int  a)
{
   struct node * b = (struct node*)malloc(sizeof(struct node)); 
  
    b->data = a;
    b->next = NULL;
     printf("%d \n",b->data);

  return a; 
}

int main()
{
   fun(239);
   fun(23);
   fun(99);

   return 0; 
 
}
