#include <iostream>
using namespace std;
int main()
{
    int j, i = 59,*zeiger0,*zeiger1,*zeiger2,*zeiger3;
    zeiger0 = &i;
    zeiger1 = new int;

    *zeiger1 = 23;
    zeiger2 = new int(33);
    zeiger3 = new int[10];
    cout<<"Zeiger0: "<< *zeiger0 << endl;
    cout<<"Zeiger1: "<< *zeiger1 << endl;
    cout<<"Zeiger2: "<< *zeiger2 << endl;

    for(j=0;j<10;j++)
    {
        *(zeiger3+j) = (j+i)*(j+2);
    }
    for ( j = 0; j < 10; j++)
    {
        cout <<j+1<<"*"<<j+2<<"="<<*(zeiger3+j)<<endl;
    }
    
    delete zeiger1;
    delete zeiger2;
    delete [] zeiger3;
  
    
    return 0;
}