#include <stdio.h>

void print(int a)
{
    printf("%i\n",a);
    
}

void *Rprint(int a)
{
    printf("%i\n", a); 
    return NULL;   
}

int main()
{

void (*food)(int);
food = print;
food(3);

void *(*copy)(int);
copy = Rprint;
copy(4);



}