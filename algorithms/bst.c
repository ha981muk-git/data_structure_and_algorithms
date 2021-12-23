#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct treenode
{
    int value;
    struct treenode *left;
    struct treenode *right;
}treenode;

treenode *createnode(int value){

    treenode *result = malloc(sizeof(treenode));
    if(result != NULL){
        result->left=NULL;
        result->right=NULL;
        result->value=value;
    }

    return result;
}

void printtabs(int numtabs){
    for(int i=0;i<numtabs;i++){
        printf("\t");
    }
}

void printtree_rec(treenode *root,int level){
    if(root==NULL){
        printtabs(level);
        printf("---<empty>---\n");
        return;
    }

    printtabs(level);
    printf("value = %d\n",root->value);
    printtabs(level);
    printf("left\n");

    printtree_rec(root->left,level+1);
    printtabs(level);
    printf("right\n");

    printtree_rec(root->right,level+1);
    printtabs(level);
    printf("left\n");

    printtree_rec(root->right,level+1);
    printtabs(level);
    printf("done\n");  

}

void printtree(treenode *root){
    printtree_rec(root,0);
}
bool insertnumber(treenode **rootptr, int value){
    treenode *root = *rootptr;
    if(root==NULL){
        //tree empty
        (*rootptr) = createnode(value);
        return true;
    }
    if(value == root->value){
        return false;
    }

    if(value< root->value){
        return insertnumber(&(root->left), value);
    }else{
         return insertnumber(&(root->right), value);
    }
}

bool findnumber( treenode *root, int value){
    if(root==NULL) return false;
    if(root->value==value){
        return true;
    }
    if(value <root->value){
        return findnumber(root->left,value);
    }else{
        return findnumber(root->right,value);
        
    }
}
 

int main(){

    /*
   treenode *n1 = createnode(20);
   treenode *n2 = createnode(25);

   treenode *n3 = createnode(50);

   treenode *n4 = createnode(10);

   treenode *n5 = createnode(16);
   treenode *n6 = createnode(5);

   n1->left =n2;
   n1->right=n3;
   n3->left =n4;
   n4->right=n5;

   printtree(n1);
   free(n1);
   free(n2);
   free(n3);
   free(n4);
   free(n5);
   free(n6);

   */

  treenode *root = NULL;
  insertnumber(&root,56);
  insertnumber(&root,51);
  insertnumber(&root,58);
  insertnumber(&root,66);
  insertnumber(&root,46);
  insertnumber(&root,36);
  insertnumber(&root,86);

  printtree(root);

  return 0;
}