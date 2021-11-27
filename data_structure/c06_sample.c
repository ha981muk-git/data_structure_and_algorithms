#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  MAX 6


int main()
{
    int arr[] = {10,30,23,29,90,78};

    int i, *ptr ; 
    
            ptr = arr;
              i = 0;      
          
        while(ptr <=&arr[MAX])
        {
          printf("Address of arr[%i] = %p\n",i,ptr);
          printf("Value of arr[%i]   = %d\n",i,*ptr);  
          printf("Size of array      = %ld\n",(sizeof(arr))/sizeof(int));
          printf("\n");
            /*Zeiger zu vorherige Address
            */   
          ptr++;
          i++;          
        }
           return 0; 
}
