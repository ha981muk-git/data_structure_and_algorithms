
/*
 *Algorithmus lernen 
 * Datum : 08.02.2021
 * */
#include <stdio.h>
#include <stdlib.h>


// Haupt-Programm
 int main()
 { 
             int  n;
             int  algo_01[]={673,12,11,0,33,88,98,5,4,93,77};
             int  size_algo_01 = sizeof(algo_01)/sizeof(int);

             selection_sort(algo_01,size_algo_01-1); // Selection Sort anrufen

             for(n=0;n<(size_algo_01-1);n++)
             {
                 printf("%i -> ",algo_01[n]);
                 
             }
             printf("Selection Sort ");
     return 0;
 }