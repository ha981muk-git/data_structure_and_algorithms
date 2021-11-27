#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NIL (struct node *)0

struct book{       
      int  artNum;
      char name[20];
      float price;
      int  pages;
};

struct node {
  
 struct book ebook;
 struct node *next;
 struct node *prev;

};

struct node =malloc(sizeof(struct node));
