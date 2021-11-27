/*Ein Programm, die die Elemente  auf die Array in einer Funktion einfuhrt*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>



void pass(int n[] , int nth)
{
     for (int i=0;i<=nth;i++)
         {
          printf(" %i ",n[i]); /*Die Elemente in dem Array wird ausgegeben*/
         }

     if(1){printf("\n");}
      
}

int main()
{
           int c[] = {23,24,55,64,4,6};
           int k = sizeof(c)/sizeof(int)-1;


           pass(c,k);
        
      int a[10][10], i, j;
 
    srand(time(NULL));
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            a[i][j] = rand() % 20 + 1;
 
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf(" %d", a[i][j]);
            if (a[i][j] == 20)
                goto Done;
        }
        printf("\n");
    }
Done:
    printf("\n");



           return 0;
}
