#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

struct Student {
  char name[N];
  double note;
};

struct node {
    struct Student alleStudenten;
    struct  node * p_next;   
};

struct node * new_Student( char *sName, double snote){

  struct  node * p_help;
  p_help = malloc(sizeof(struct node));

  strncpy(p_help->alleStudenten.name,sName,sizeof(p_help->alleStudenten.name));
  p_help->alleStudenten.note = snote;

  p_help->p_next = NULL;
  return p_help;
}

void printList( struct node * s){
  printf(" %s - %f\n",
  s->alleStudenten.name,
  s->alleStudenten.note);

  if(s->p_next != NULL)
  {
      printList(s->p_next);
  }
}

double durchschnitt(struct node * s)
{
    double ds = 0; 
    ds +=s->alleStudenten.note;
    ds /=(sizeof(s->alleStudenten.note)/sizeof(double));
    if(s->p_next != NULL){ 
         durchschnitt(s->p_next);        
    }
    return ds;
};


// Hauptprogramm-hier 
int main()
{  
    struct  node * p_first;

    struct node * p_act;
    p_first = p_act = new_Student("Harry",2.3);
    
    p_act->p_next = new_Student("Roni",1.1);
    p_act =p_act->p_next ;

   

    printList(p_first);
    printf(" Durchnitt  = %f \n",durchschnitt(p_first));
    return 0;
}