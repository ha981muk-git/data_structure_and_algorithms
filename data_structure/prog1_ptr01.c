#include <stdio.h>

int   func(int  * c , int * d )
{
    return (*c-*d);

}
int  cube (const int *num) {
  int result;
  result = (*(int *)num) * (*(int *)num) * (*(int *)num);
  return result;
  }
  

int main()
{
    int a  = 5;
    int b  = 0;
    int * c ;
    c = & a;
    printf("Hallo = \n");
    printf("%i\n",func(c,&b));
     printf("Hallo = \n");


  int x, cube_int;
  x = 4;
  cube_int = cube (&x);
  printf("%d cubed is %d\n", x, cube_int);



    return 0;

}