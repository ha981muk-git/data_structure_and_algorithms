#include <iostream>


int   func(int * a , int *b )
{
    int z =  *a-*b;
    return z;
}
int * larger( int * a, int * b  )
  {
      if ( *a > * b)
      {
          return a;
      }else {
          return b;
      }
  }


int main()
{
    int a  = 5;
    int b  = 5775;
    printf("Hallo = \n");

     printf("%i \n",func(&a,&b));
     int * p ;
     p = larger(&a,&b);
     printf("%i\n",*p);
    
     printf("Hallo = \n");
    return 0;

  

}