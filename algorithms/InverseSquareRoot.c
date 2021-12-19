#include <stdio.h>

void square( float number){
    long i;
    float x2,y;
    const float threehalfs = 1.5F;

    x2= number*0.5F;
    y=number;

    i = *(long *) &y; // It changes the number in float y address to long y address
     printf("y= %f, i= %ld  \n",y,i);
    i = 0x5f3759df - (i >> 1);
    printf("i= %ld  \n",i);
    y = *(float *) &i;  // It changes the number in long i to  address to float y address

    printf("Threehalfs = %f, x2 = %f , y = %f, i= %ld  \n",threehalfs,x2,y,i);
    y = y * (threehalfs -(x2*y*y));
     printf("Threehalfs = %f, x2 = %f , y = %f, i= %ld  \n",threehalfs,x2,y,i);
     y = y* (threehalfs -(x2*y*y));
      printf("Threehalfs = %f, x2 = %f , y = %f, i= %ld  \n",threehalfs,x2,y,i);
      i = 0x5f3759df;
    printf("i= %ld  \n",i);
     printf("y= %f, i= %ld  \n",y,i);
    printf("\n");
}
 
int main(){

    float number = 567 ;

    long i;
    float x2,y;
    const float threehalfs = 1.5F;

    x2= number*0.5F;
    y=number;

    i = *(long *) &y; // It changes the number in float y address to long y address
     printf("y= %f, i= %ld  \n",y,i);
    i = 0x5f3759df-(i >> 1);
    printf("i= %ld  \n",i);
    y = *(float *) &i;  // It changes the number in long i to  address to float y address

    printf("Threehalfs = %f, x2 = %f , y = %f, i= %ld  \n",threehalfs,x2,y,i);
    y = y * (threehalfs -(x2*y*y));
     printf("Threehalfs = %f, x2 = %f , y = %f, i= %ld  \n",threehalfs,x2,y,i);
     y = y* (threehalfs -(x2*y*y));
      printf("Threehalfs = %f, x2 = %f , y = %f, i= %ld  \n",threehalfs,x2,y,i);
      i = 0x5f3759df;
    printf("i= %ld  \n",i);

    printf("\n");
    square(234323.00);
    square(34);
    square(16);
    

    return 0;
}