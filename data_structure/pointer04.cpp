#include <iostream>
using namespace std;
void f(int a)
{
    cout << "I am " <<  a <<endl;
}

int main()
{
    int x = 5, y = 10;
    int *z = &x;
    
    *z += 1;  // x = 5 +1
     x += 1;  // x = 6 + 1
     printf("%i - %i\n",*z,x); // 7 ,7
    
     z  = &y;
    *z += 1;  // 10 + 1
     printf("%i \n",*z);

     int &a = x;

     a += 1; // a = 7 + 1
     x += 1; // x = 8 + 1
     f(a);

     printf("%i - %i \n",a,x); // 9 ,9

      a = y; 
      a += 1; // 11 +1
     printf("%i \n",a);

     int i = 0;

     cout << i++ << " , " << i++ << endl;
    
    return 0;
}