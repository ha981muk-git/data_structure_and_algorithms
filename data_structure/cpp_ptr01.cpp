#include <iostream>
using namespace std;

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

    ***ptr3 = 8;

    int  ****ptr10;
    ptr10 = &ptr3;

    ****ptr10 = 10;


    cout <<" a = "<< a <<endl<<endl;
    cout <<" ptr1   = "<< ptr1 <<endl;
    cout <<" *ptr1  = "<< *ptr1 <<endl<<endl;
    cout <<" ptr2    = "<< ptr2 <<endl;
    cout <<" *ptr2   = "<< *ptr2 <<endl;
    cout <<" **ptr2  = "<< **ptr2 <<endl<<endl;
    cout <<" ptr3      = "<< ptr3 <<endl;
    cout <<" *ptr3     = "<< *ptr3 <<endl;
    cout <<" **ptr3    = "<< **ptr3 <<endl;
    cout <<" ***ptr3   = "<< ***ptr3 <<endl<<endl;

    cout <<" ptr10       = "<< ptr10 <<endl;
    cout <<" *ptr10      = "<< *ptr10 <<endl;
    cout <<" **ptr10     = "<< **ptr10 <<endl;
    cout <<" ***ptr10    = "<< ***ptr10 <<endl;
    cout <<" ****ptr10   = "<< ****ptr10 <<endl;
    return 0;
}