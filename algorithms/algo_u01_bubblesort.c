
/*
 *Algorithmus lernen 
 * Datum : 08.02.2021
 * */
#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b){
    int temp;
    temp  = *a;
       *a = *b;
       *b = temp; // temp <- a

}

void bubblesort(int arr[],int nsize){
    int nitr = nsize-1;

    for(int j = 0; j < nsize; j++){
        for(int i=0;i < nitr;i++){
            if(arr[i] > arr[i+1]){
                swap(&arr[i],&arr[i+1]);   
        }
      }
      nsize--;
    }
}

void printArray(int arr[], int size){
    for(int i = 0;i< size;i++){
        printf("%i -> ",arr[i]);
    }
}
// Haupt-Programm
 int main()
 { 
        int  array_01[]={673,12,11,0,33,88,98,5,4,93,77};
        int  size_array_01 = sizeof(array_01)/sizeof(array_01[0]);
        swap(&array_01[1],&array_01[4]);
        //selection_sort(algo_01,size_algo_01); // Selection Sort anrufen
        bubblesort(array_01,size_array_01);
        printArray(array_01,size_array_01);
        
        printf("\nBubble Sort\n");
     return 0;
 }