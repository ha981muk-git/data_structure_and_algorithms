#include <iostream>
using namespace std;

void fkt(int &xref)
   {
       xref= xref * 10;
       cout <<xref<<endl;
   }
int main()
{
    int i;
    int j = i;
    int &ri = i;
    i = 1;
    j = 4;

    cout << "i = " << i << ", j " << j << endl;
    cout << " &i = " << &i << ", &j = " << &j << endl << endl;
    ri = 5;
   
   cout << "i = " << i << ", ri = " << ri << endl;
   cout << "&i = " << &i << ", &ri = " << &ri << endl;

   int x = 20;
   fkt(x);
   

  

  
    
    return 0;
}
