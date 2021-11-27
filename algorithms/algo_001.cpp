#include <iostream>
#include <vector>
#include <stdbool.h>
using namespace std;
void PrintVector(vector<int> v)
{
  for(int i=0;i<v.size();i++)
  {
   cout<<v[i]<<" | ";
  }
}

int main()
{
    vector<int> v(5);

    v[0]=22;
    v[1]=233;
    v[2]=34;
    v[3]=8;

    v.push_back(55);

    cout<<v.front() <<endl;
    cout<<v.back() <<endl;
    cout <<v.at(2)<<endl;
    
    PrintVector(v);
    cout <<endl;

    vector <int>::iterator p = v.begin(); // Iterators are similar to pointers

    for(;p!=v.end();p++){ cout<<"Value => "<<*p<<endl;}
    cout <<" End -1 "<<endl; 
    
    vector <int>::iterator q = v.end();  
    // Iterators are similar to pointers
    // To understand look below array and methods 
    for(;q!=v.begin();q--){ cout<<"Value => "<<*q<<endl;}

    int a[]= {22,44,36,66,76};
    int *sptr = &a[0];
    int *eptr = &a[0]+(sizeof(a)/sizeof(int));// Pointer pointing towards the end of array as (sizeof(a)/sizeof(int) add to point to the end 
    for(;sptr != eptr;sptr++)
    {
      cout << " § Values => "<<*sptr<<endl;
    }
     
    return 0;
}