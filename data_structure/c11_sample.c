#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define NIL	(struct node *)0

struct book{       
      int  artNum;
      char name[20];
      float price;
      int  pages;
};

struct node {
  
 struct book ebook;
 struct node *next;
 //struct node *prev;
};

struct node * inputData(int a,char * b,float c,int d){
    struct node * abook;

    abook = malloc(sizeof(struct node));

    abook->ebook.artNum = a;
    strncpy(abook->ebook.name,b,sizeof(abook->ebook.name));
    abook->ebook.price  = c;
    abook->ebook.pages  = d;

    abook->next = NULL;

    return abook;    
}

void printlist(struct node *p){
printf("%d - %s - %f - %d \n",
    p->ebook.artNum,
    p->ebook.name,
    p->ebook.price,
    p->ebook.pages);

   if(p->next != NULL){printlist(p->next);}
}


int main(){
   
    struct node * abook;
    
    abook = inputData(232343,"C",23.23,343);
    abook->next = NULL;
    printlist(abook);
   
    return 0; 
}
