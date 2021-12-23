#include <stdlib.h>
#include <stdio.h>

struct node {
    int value;
    struct node *next;
};


typedef struct node node_t;

node_t *create_new_node(int value){
    node_t  *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

void printlist( node_t *head){
    node_t *temporary = head;
    while (temporary != NULL)
    {
      printf("%d - ",temporary->value);
      temporary = temporary->next;
    }
    printf("\n");
}

node_t *insert_at_head1(node_t *head, node_t *node_to_insert){
    node_to_insert->next=head;
    return node_to_insert;
}
node_t *insert_at_head2(node_t **head, node_t *node_to_insert){
    node_to_insert->next=*head;
    *head =node_to_insert;
    return node_to_insert;
}

node_t *find_node(node_t *head,int value){
       node_t *tmp = head;
       while(tmp!=NULL)
       {
        if(tmp->value==value) return tmp;
        tmp = tmp->next;
       }
       return NULL;
       
}


void insert_after_node(node_t *node_to_insert_after, node_t *newnode){
    newnode->next = node_to_insert_after->next;
    node_to_insert_after->next = newnode;
}
int main(){

/*
    node_t n1,n2,n3;
    node_t *head;


    n1.value = 45;
    n2.value = 5;
    n3.value =23;

    head  = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;
*/
/*
node_t *head;
node_t *tmp;


tmp = create_new_node(23);
tmp = head;
tmp = create_new_node(25);
tem->next = head;
tmp = head;
tmp = create_new_node(17);
tem->next = head;
tmp = head;
tmp = create_new_node(67);
tem->next = head;
tmp = head;
tmp = create_new_node(13);
tem->next = head;
tmp = head;
tmp = create_new_node(83);
tem->next = head;
tmp = head;
*/

node_t *head=NULL;
node_t *tmp;

for(int i=0;i<25;i++){
tmp = create_new_node(i);
tmp->next=head;
head=tmp;
}

printlist(head);

for(int i=0;i<25;i++){
tmp = create_new_node(i);
tmp = insert_at_head1(head,tmp);
}
 
 printlist(head);

for(int i=0;i<25;i++){
tmp = create_new_node(i);
insert_at_head2(&head,tmp);
}
 
 printlist(head);
 tmp = find_node(head,14);
 printf("found node with value %d \n",tmp->value);
 insert_after_node(tmp,create_new_node(77));
 printlist(head);
 return 0;
}