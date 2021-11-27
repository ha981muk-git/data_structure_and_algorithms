#include <stdio.h>



int add(int a,int b){ return a + b;}
int sub(int a,int b){ return a - b;}


int  do_operation( int (*ptr)(int,int),int x ,int y)
{
    return ptr(x,y);
}

int main(int argc , char ** argv)
{

 int result1 = do_operation(add,3 ,5);
 printf(" Result1 %i \n",result1);
 printf(" Result2 %i \n",do_operation(sub,3 ,5));

}