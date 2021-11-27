#include <stdio.h>
#include <stdlib.h>
/*
// Erstens
struct S 
{
   int n;
} s = 1;
*/

void print1(int a){
    printf("Loby = %i",a+77);
}

void *print2(int a)
{
    printf("coby = %i",a);
    return NULL;
}
int add(int a,int b){ return a+b;}
int mult(int a,int b){ return a*b;}

  int do_operation(int (*op)(int,int),int x,int y)
{
  return op(x,y);

}

void fun(int x)
{
    printf("Die Werte von x ist %i.",x);
}
double di(double a,double b)
{
    double c = a/b;
    return c;
}


void call(char *c)
{
    printf(" Hallo  %s\n",c);
}

void a(){ printf("Hallo");}
void b(void (*p)()){p();//call back 
}

int lob(int *a,int *b){
    int c = *a-*b;
    return c;
    
}
void * printList(int a , int b , int c)
{
   printf("Add %i gm of Suger/ %i ml  in coffee and add %i mg of chocolate to it.\n",a,b,c);
   return 0;
}


int main()
{
    int result = do_operation(add,5,8);
    int result2= do_operation(mult,45,34);

    printf("%i \n",result);
    printf("%i \n",result2);

    void (*fun_ptr)(int) = fun;
    (*fun_ptr)(10);

    int c;

    int (*ptr)(int,int);
    ptr = add;  // "=&add" can also be used to assign the address of ptr 

    c =(*ptr)(4,6); // ptr(4,6) and add(4,6) also works same .. 
    printf("\n %d\n",c);

    double (* dptr)(double,double);
    double d;
    dptr = di;
    d =(*dptr)(7,9); // dptr(7,8) or add , this is alos gonna works 
    printf(" %f\n",d);
    
    dptr(34,99);
    printf(" Hallo dptr , Ich bin Hier  %f ",dptr(7,99));
    printf(" Hallo add, Ich bin Hier  %i ",add(77,99));

    
    
    
    void(*cptr)(char*);
    cptr = call;
    cptr("Harsh");
    (*cptr)("Bhushan");

   printf("\n");
   
   void (*hptr)() = a;
   b(hptr); // same as one like b(a) below
   b(a);
   int x = 0, y = 6;

   int xptr = lob(&x,&y);
   printf("%d",xptr);

   void *(*foo)(int);
    foo = print2;
    foo(5);
   void (*food)(int);
   food = print1;
   food(34);
  
void *(*coffee)(int,int,int);

    coffee = printList;
    coffee(5,100,2);
















    printf("\n");
    
    

   
   
   

    /*
    // Am Anfang 
    float *p, **pp;  //p ist ein Zeiger auf float
                     //pp ist ein Zeiger auf ein Zeiger zu int
    int (*fp)(int);  // fp ist ein Zeiger auf function mit Variabletype int(int)  
    // Danach 
    int n ; 
    int *np = &n; // Zeiger auf int ;
    int * const *npp = &np; //kopiert 
    int a[2];
    int (*ap)[2]=&a; // Zeiger auf Array zu int 
    int *sp = &s.n;

    int b;
    int *bp = &n;
    *bp = 7;
    printf("%d\n",*bp);

    int c[2];
    int *cp = c;//Zeiger auf c[0]
    int d[3][3];
    int (*row)[3] = d;  // Zeiger auf c[0]

    void f(int);
    void (*pf1)(int) = &f;
    void (*pf2)(int) = f;
    */

    return 0;
}