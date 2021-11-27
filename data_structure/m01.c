#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int gen_random(int a[],int size_in) // generates the random digits between 1 and 3 
{  int i = 0;
     srand(time(NULL));
   for( i = 0;i < size_in ;i++) 
   {
      
    a[i] = (rand() % 3) + 1;
   }
   return a[i];

}
double calc(int random_in,double R)
{
   double  r = R / 9;
   if(random_in == 1)
   {     r = R + r ;
   }else{r = R - r;}

   return r;
}

double B(double x)
{
    x = x / 9;
    return x;
}

double R(double x)
{
    double y = B(x);
     x = x-y;
     return x;
}

void printList(double x)
{
    static int i = 0;
    double b = B(x);
    double r = R(x);
    i++;
    if(b>= 0.30){
    printf("N = %i : B = %f R = %f  \n",i,b,r);
       
    printList(r);
    }else{printf("Finish\n");}
}

void print_act(double x)
{
    static int i = 1;
    double b = B(x);
    double r = R(x);
    
    printf("N = %i : B = %f R = %f  \n",i,b,r);
}


int main()
{   
    double x   = 10;
    double y;
    int i = 0;
    int array[1000];

    printList(x);
     gen_random(array,1000);
    for(i=0;i<1000;i++)
     {
        printf("%i ",array[i]);
        if((i%10)==0){ printf("\n");}
     }
     printf("\n");

    y = calc(array[0],x);
    double z;
    for(i=1;i<1000;i++)
    {    z = calc(array[i],y);
        calc(array[i+1],z);
        
    }
    printf(" %f",z);
    
   
    printf("\n");
    return 0;
}

