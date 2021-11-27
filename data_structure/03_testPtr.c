#include <stdio.h>




void * printList(int a , int b , int c)
{
   printf("Add %i gm of Suger/ %i ml  in coffee and add %i mg of chocolate to it.\n",a,b,c);
   return 0;
}


int main()
{
    void *(*coffee)(int,int,int);

    coffee = printList;
    coffee(5,100,2);
   
    return 0;
}