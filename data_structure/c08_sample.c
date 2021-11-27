#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int * genRandom()
{
     static int r[10];
     int i; 
     srand(time(NULL));
      
     for(i=0;i<=10;i++)
       {
         r[i]=rand()%100+1; 
         printf("%d\n",r[i]);
       }
    return r;
}

int main()
{
     int i, *ptr;

      ptr = genRandom();
      
      for(i=0;i<=10;i++)
     {
      printf("The address %p random number r[%d] is %d\n",(ptr+i),i,*(ptr+i));
     }
     return 0; 
      
}
