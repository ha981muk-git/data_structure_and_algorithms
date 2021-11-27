#include <stdio.h>

int main()
{
    int a = 0; 

    int *ptr1 ;
    ptr1 = &a;
    *ptr1 = 2;


    int **ptr2;
    ptr2 = &ptr1;
    **ptr2 = 4;

    int ***ptr3;
    ptr3 =&ptr2;

    **ptr3 = 8;

    printf("Werte von a = %i \n",a);
    printf("Address von ptr1 = %p \n",ptr1);

    printf("Werte von *ptr1 = %i \n",*ptr1);

    printf("Werte von a =  \n",ptr2);
    printf("Werte von a =  \n",*ptr2);
    printf("Werte von a =  \n",**ptr2);
    printf("Werte von a =  \n",*ptr3);
    printf("Werte von a =  \n",**ptr3);
    printf("Werte von a =  \n",***ptr3);

    return 0;
}